from pybakke import GameWrapper, Vector
cVarManager = None
gameWrapper = None
import os

def add(i, j):
    return i + j


def log(message, CVarManager):
    CVarManager.log("Hello from Python!:" + message)


def onLoad(GameWrapper: GameWrapper, CVarManager: CVarManager):
    global cVarManager
    global gameWrapper
    cVarManager = CVarManager
    gameWrapper = GameWrapper
    CVarManager.log("Hello from onLoad in Python! EDIT!")
    GameWrapper.HookEventPost("Function TAGame.Car_TA.EventHitBall", onHitBall)
    GameWrapper.HookEvent("Function TAGame.Car_TA.SetVehicleInput", onTick)


def onTick(eventName):
    cVarManager.log("Hello from onTick!")


def onHitBall(eventName):
    cVarManager.log("hit ball")

    #ballV = ball.GetVelocity()
    #cVarManager.log(eventName + ": " + str(gameevent.GetSecondsElapsed()))
    # cVarManager.log(f"CarPosition({carP.x},{carP.y}")
    # cVarManager.log(str(gameevent.Add(3,4)))


def onTick(eventName):
    gameevent = gameWrapper.GetGameEventAsServer()
    car = gameevent.GetGameCar()
    ball = gameevent.GetBall()
    if car.IsNull() or ball.IsNull():
        return

    playerVelocity: Vector = car.GetVelocity()
    #cVarManager.log(f"CarPosition({playerVelocity.x},{playerVelocity.y}")
    playerPosition = car.GetLocation()
    playerPosition.Z += 170

    ball.SetVelocity(playerVelocity)
    ball.SetLocation(playerPosition)
