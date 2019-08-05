from pybakke import GameWrapper, Vector, BallWrapper, CarWrapper, CVarManagerWrapper


class DefenderPlugin:

    def __init__(self, game_wrapper: GameWrapper, cvar_manager: CVarManagerWrapper):
        self.game_wrapper = game_wrapper
        self.cvar_manager = cvar_manager
        self.cvar_manager.log("Defender plugin __init__")
        game_wrapper.HookEvent(
            "Function TAGame.Car_TA.SetVehicleInput", self.on_tick)

    def on_tick(self, event_name):
        gameevent = self.game_wrapper.GetGameEventAsServer()
        car = gameevent.GetGameCar()
        ball = gameevent.GetBall()
        if car.IsNull() or ball.IsNull():
            return

        player_velocity: Vector = car.GetVelocity()
        # cVarManager.log(f"CarPosition({playerVelocity.x},{playerVelocity.y}")
        player_position: Vector = car.GetLocation()
        player_position.Z += 170

        ball.SetVelocity(player_velocity)
        ball.SetLocation(player_position)


PLUGIN = None


def onLoad(game_wrapper: GameWrapper, cvar_manager: CVarManagerWrapper):
    global PLUGIN
    PLUGIN = DefenderPlugin(game_wrapper, cvar_manager)
