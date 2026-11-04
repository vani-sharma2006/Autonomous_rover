#ifndef IMU_H
#define IMU_H

class IMU
{
public:
    IMU();  //constructor declaration

    bool initialize();

    float getAccelX();
    float getAccelY();
    float getAccelZ();

    float getGyroX();
    float getGyroY();
    float getGyroZ();
};

#endif