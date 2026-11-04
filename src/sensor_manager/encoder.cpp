#include "encoder.h"

Encoder::Encoder(int pinA , int pinB): pinA(pinA), pinB(pinB), tickCount(0)
{
}

bool Encoder::initialize(){
    return true;

}
void Encoder::reset(){
    tickCount = 0;

}
int Encoder::getTicks(){
    return tickCount;

}

float Encoder::getDistance(){
    return tickCount * DISTANCE_PER_TICK;
}


