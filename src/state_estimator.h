#ifndef STATE_ESTIMATOR_H
#define STATE_ESTIMATOR_H

#include "sensor_manager.h"

struct RoverState
{
    float x;
    float y;

    float heading;

    float velocity;
};

class StateEstimator
{
public:
    StateEstimator();

    void update(const SensorData& sensorData,
                float dt);

    RoverState getState();

private:
    RoverState state;
};

#endif