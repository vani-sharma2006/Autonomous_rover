#ifndef ROVER_CONTROLLER_H
#define ROVER_CONTROLLER_H

#include "state_estimator.h"

enum RoverStateMachine
{
    IDLE,
    NAVIGATE,
    OBSTACLE_AVOIDANCE,
    EMERGENCY_STOP
};

class RoverController
{
public:
    RoverController();

    void update(const RoverState& state,
                float frontDistance);

private:
    void navigateToGoal(const RoverState& state);

    void obstacleAvoidance();

    void emergencyStop();

    float goalX;
    float goalY;

    RoverStateMachine currentState;
};

#endif