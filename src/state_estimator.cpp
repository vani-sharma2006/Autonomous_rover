#include "state_estimator.h"
#include <cmath>

StateEstimator::StateEstimator()
{
    state.x = 0.0f;
    state.y = 0.0f;

    state.heading = 0.0f;

    state.velocity = 0.0f;
}

void StateEstimator::update(
    const SensorData& sensorData,
    float dt)
{

    state.heading +=
        sensorData.gyroZ * dt;


    float averageTicks =
        (sensorData.leftEncoder +
         sensorData.rightEncoder)
         / 2.0f;
    

    float distance =
        averageTicks * 0.0015f;


    state.x +=
        distance *
        std::cos(state.heading);

    state.y +=
        distance *
        std::sin(state.heading);

    state.velocity =
        distance / dt;
}

RoverState StateEstimator::getState()
{
    return state;
}