#ifndef ENCODER_H
#define ENCODER_H

class Encoder{

    public:
     Encoder(int pinA , int pinB);
     float getDistance();
     bool initialize();
     void reset();
     int getTicks();


    private:
     int pinA;
     int pinB;

     volatile int tickCount;

     static constexpr float DISTANCE_PER_TICK =
        0.0015f; // meters
    
};

















#endif