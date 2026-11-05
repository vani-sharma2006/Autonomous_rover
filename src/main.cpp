#include "sensor_manager.h"
#include "state_estimator.h"
#include "rover_controller.h"

int main()
{
    SensorManager sensorManager;

    StateEstimator stateEstimator;

    RoverController roverController;

    sensorManager.initialize();

    float dt = 0.01f;

    while(true)
    {
        SensorData sensorData =
            sensorManager.readSensors();

        stateEstimator.update(
            sensorData,
            dt);

        RoverState state =
            stateEstimator.getState();

        roverController.update(
            state,
            sensorData.frontDistance);
    }

    return 0;
}