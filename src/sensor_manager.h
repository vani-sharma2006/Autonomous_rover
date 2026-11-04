#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H
#include "sensor_manager/imu.h"
#include "sensor_manager/encoder.h"
#include "sensor_manager/ultrasonic_sensor.h"
struct SensorData //the way we want the sensor data to be recorded (the format)
{
    float accelX;
    float accelY;
    float accelZ;

    float gyroX;
    float gyroY;
    float gyroZ;

    int leftEncoder;
    int rightEncoder;

    float frontDistance;
};

class SensorManager
{
public:
    SensorManager();

    void initialize();

    SensorData readSensors(); //object created

private:
    float readAccelX();
    float  readAccelY();
    float  readAccelZ();

    float  readGyroX();
    float  readGyroY();
    float  readGyroZ();

    Encoder LeftEncoder;
    Encoder RightEncoder;

    Ultrasonic FrontSensor;
    IMU imu;
};

#endif