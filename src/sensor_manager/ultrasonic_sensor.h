#ifndef ULTRASONIC_H
#define ULTRASONIC_H

class Ultrasonic{
    private:
     int trigger_pin;
     int echo_pin;

    public:
     Ultrasonic( int trigger_pin, int echo_pin );
     bool initialize();
     float getDistance();
};

#endif