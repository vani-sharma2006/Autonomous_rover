#include "rover_controller.h"
#include <cmath>
#include <iostream>

RoverController::RoverController()
{
    goalX = 10.0f;
    goalY = 5.0f;

    currentState = IDLE;
}

void RoverController::update(
    const RoverState& state,
    float frontDistance)
{
    switch (currentState)
    {
    case IDLE:

        std::cout << "IDLE\n";

        currentState = NAVIGATE;

        break;

    case NAVIGATE:

        if(frontDistance < 0.5f)
        {
            currentState =
                OBSTACLE_AVOIDANCE;
        }

        navigateToGoal(state);

        break;

    case OBSTACLE_AVOIDANCE:

        obstacleAvoidance();

        if(frontDistance > 1.0f)
        {
            currentState =
                NAVIGATE;
        }

        break;

    case EMERGENCY_STOP:

        emergencyStop();

        break;
    }
}

void RoverController::navigateToGoal(
    const RoverState& state)
{
    float dx = goalX - state.x;
    float dy = goalY - state.y;

    float desiredHeading =
        atan2(dy, dx);

    float headingError =
        desiredHeading -
        state.heading;

    std::cout
        << "Heading Error: "
        << headingError
        << std::endl;
}

void RoverController::obstacleAvoidance()
{
    std::cout
        << "Obstacle Detected"
        << std::endl;
}

void RoverController::emergencyStop()
{
    std::cout
        << "Emergency Stop"
        << std::endl;
}