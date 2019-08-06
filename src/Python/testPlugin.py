from pybakke import GameWrapper, Vector, BallWrapper, CarWrapper, CVarManagerWrapper, CVarWrapper, ServerWrapper
from random import randrange


class DefenderPlugin:

    def __init__(self, game_wrapper: GameWrapper, cvar_manager: CVarManagerWrapper):
        self.game_wrapper: GameWrapper = game_wrapper
        self.cvar_manager = cvar_manager

        self.plugin_active = False

        self.last_ground_hit = 0.0
        self.last_shot = 0.0
        self.destination_goal = 0
        self.next_shot_timeout = 0

        self.cvar_manager.log("Defender plugin __init__")

        cvar_manager.registerCvar("defender2_addedheight", "(300, 1400)",
                                  "Height above the backboard to shoot", True, True, -5000.0, True, 10000.0)
        cvar_manager.registerCvar("defender2_side_offset", "(0, 500)",
                                  "Variance for backboard shots (0 = only above net)", True, True, -5000.0, True, 5000.0)
        cvar_manager.registerCvar("defender2_shotspeed", "(800, 1100)",
                                  "The speed to use when using defender training", True, True, 0.0, True, 1999.9)
        cvar_manager.registerCvar("defender2_cooldown", "(3000, 6000)",
                                  "Time to wait after shooting/saving a ball", True, True, 0.0, True, 120000.0)
        cvar_manager.registerCvar(
            "defender2_active", "0", "Whether defender plugin is active", True, True, 0.0, True, 1.0)
        cvar_manager.getCvar("defender2_active").addOnValueChanged(
            self.on_defender_status_changed)

        game_wrapper.HookEventPost(
            #"Function TAGame.GameMetrics_TA.GoalScored",
            "Function GameEvent_Soccar_TA.Active.HandleHitGoal",
            self.on_hit_goal)

        game_wrapper.HookEvent(
            "Function TAGame.Ball_TA.EventHitGround",
            self.on_ground_hit)

    def on_unload(self):
        self.game_wrapper.UnhookEvent(
            "Function GameEvent_Soccar_TA.Active.HandleHitGoal")
        self.game_wrapper.UnhookEvent(
            "Function TAGame.Ball_TA.EventHitGround")


    def generate_next_timeout(self):
        if self.game_wrapper.IsInFreeplay():
            cooldown = self.cvar_manager.getCvar(
                "defender2_cooldown").getFloatValue() / 1000.0
            self.next_shot_timeout = self.game_wrapper.GetGameEventAsServer().GetSecondsElapsed() + cooldown

    def check_for_shot(self):
        #self.cvar_manager.log("check for shot")
        if not self.game_wrapper.IsInFreeplay():
            self.cvar_manager.executeCommand("defender2_active 0")
            self.cvar_manager.log("not in freeplay")
            return
        if not self.plugin_active:
            self.cvar_manager.log("not active")
            return
        self.handle_shot()
        self.game_wrapper.SetTimeout(lambda gw: self.check_for_shot(), 0.1)

    def handle_shot(self):
        server: ServerWrapper = self.game_wrapper.GetGameEventAsServer()
        ball: BallWrapper = server.GetBall()
        if ball.IsNull():
            self.cvar_manager.log("Ball is Null")
            return

        # Timeout not elapsed yet
        if server.GetSecondsElapsed() - self.next_shot_timeout < 0:
            #self.cvar_manager.log("Timeout not elapsed yet")
            return

        # Ball still moving towards goal, so player still have to save.
        # Reset timeout
        if server.IsBallMovingTowardsGoal(self.destination_goal, ball):
            #self.cvar_manager.log("Resetting timeout. ball moving to goal")
            self.generate_next_timeout()
            return

        # If ball has not hit the ground yet. reset timer
        if (self.last_shot > self.last_ground_hit):
            #self.cvar_manager.log("Resetting timeout. ball not hit ground yet")
            self.generate_next_timeout()
            return

        shot_speed = self.cvar_manager.getCvar(
            "defender2_shotspeed").getFloatValue()

        if server.GetGoals().Count() <= self.destination_goal:
            self.cvar_manager.log("Unable to generate shot")
            self.cvar_manager.executeCommand("defender2_active 0")
            return

        target = 1
        side_offset = self.cvar_manager.getCvar(
            "defender2_side_offset").getFloatValue()
        goal_target: Vector = server.GenerateGoalAimLocation(
            target, ball.GetLocation())
        goal_target.Z = server.GetGoalExtent(
            target).Z + self.cvar_manager.getCvar("defender2_addedheight").getFloatValue()
        goal_target.X += side_offset

        shot: Vector = server.GenerateShot(
            ball.GetLocation(), goal_target, shot_speed)
        ball.Stop()
        ball.SetVelocity(shot)
        self.last_shot = server.GetSecondsElapsed() + 1


    def on_defender_status_changed(self, old_value: str, new_value: CVarWrapper):
        self.cvar_manager.log("defender2_active changed! Edit test")
        self.plugin_active = new_value.getBoolValue()
        if self.plugin_active:
            if not self.game_wrapper.IsInFreeplay():
                self.cvar_manager.executeCommand("defender2_active 0")
                return
            self.cvar_manager.executeCommand("sv_freeplay_enablegoal 0")
            self.generate_next_timeout()
            self.check_for_shot()

    def on_hit_goal(self, event_name):
        if not self.plugin_active:
            return

        self.cvar_manager.log("hit goal")
        server: ServerWrapper = self.game_wrapper.GetGameEventAsServer()
        ball: BallWrapper = server.GetBall()
        if ball.IsNull():
            return

        ball.Stop()
        ball.SetLocation(
            Vector(randrange(-2000, 2000), 400, randrange(140, 600)))
        ball.Stop()

    def on_ground_hit(self, event_name):
        if not self.game_wrapper.IsInFreeplay():
            return
        #self.cvar_manager.log("hit ground")
        server: ServerWrapper = self.game_wrapper.GetGameEventAsServer()
        self.last_ground_hit = server.GetSecondsElapsed()


PLUGIN = None


def onLoad(game_wrapper: GameWrapper, cvar_manager: CVarManagerWrapper):
    global PLUGIN
    PLUGIN = DefenderPlugin(game_wrapper, cvar_manager)

def onUnload():
    global PLUGIN
    PLUGIN.on_unload()
    PLUGIN = None
