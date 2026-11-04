#include "imu.h"
#include <iostream>
using namespace std;

IMU::IMU(){
    std::cout<< "Imu is created";
}

bool IMU::initialize(){
    //initialise imu/encoder
    return true;
}

float IMU::getAccelX(){
    return 0.0f;
}

float IMU::getAccelY(){
    return 0.0f;
}

float IMU::getAccelZ(){
    return 0.0f;
}

float IMU::getGyroX()
{
    return 0.0f;
}

float IMU::getGyroY()
{
    return 0.0f;
}

float IMU::getGyroZ()
{
    return 0.0f;
}
