#include "ultrasonic_sensor.h"

Ultrasonic::Ultrasonic(int trigger_pin, int echo_pin): trigger_pin(trigger_pin) , echo_pin(echo_pin)
{

}

bool Ultrasonic::initialize(){
    return true;
}
float Ultrasonic::getDistance(){
    return 0.0f;

}


