#include "sensor_manager.h"
#include <iostream>
using namespace std;

SensorManager::SensorManager(): 
             LeftEncoder(18,19), 
             RightEncoder(20,21),
             FrontSensor( 14, 15)
{
    std::cout <<"Sensor Manager is created";
}

void SensorManager::initialize()
{
    imu.initialize();
    LeftEncoder.initialize();
    RightEncoder.initialize();
    FrontSensor.initialize();
}

SensorData SensorManager::readSensors()
{
    SensorData data;

    data.accelX = imu.getAccelX();
    data.accelY = imu.getAccelY();
    data.accelZ = imu.getAccelZ();

    data.gyroX = imu.getGyroX();
    data.gyroY = imu.getGyroY();
    data.gyroZ = imu.getGyroZ();

    data.leftEncoder = LeftEncoder.getTicks();
    data.rightEncoder = RightEncoder.getTicks();

    data.frontDistance = FrontSensor.getDistance();

    return data;
}

float SensorManager::readAccelX()
{
    return 0.0f;
}

float SensorManager::readAccelY()
{
    return 0.0f;
}

float SensorManager::readAccelZ()
{
    return 0.0f;
}

float SensorManager::readGyroX()
{
    return 0.0f;
}

float SensorManager::readGyroY()
{
    return 0.0f;
}

float SensorManager::readGyroZ()
{
    return 0.0f;
}