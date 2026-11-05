# Autonomous Rover Platform

## Overview

This project is an autonomous rover built around an ESP32-based custom PCB. The software is developed in C++ and follows a modular robotics architecture consisting of sensor abstraction, state estimation, and autonomous control layers.

The objective of the project is to explore concepts commonly used in autonomous vehicles, including sensor fusion, state estimation, navigation, and embedded software development.

---

## Features

- Custom ESP32-based control board
- Modular C++ software architecture
- IMU sensor integration
- Wheel encoder integration
- Ultrasonic obstacle detection
- Real-time sensor acquisition
- Rover state estimation
- Autonomous navigation framework
- Embedded firmware development

---

## System Architecture

```text
Sensors
│
├── IMU
├── Left Wheel Encoder
├── Right Wheel Encoder
└── Ultrasonic Sensor
      │
      ▼
Sensor Manager
      │
      ▼
State Estimator
      │
      ▼
Rover Controller
      │
      ▼
Motor Driver
```

---

## Software Structure

```text
src/

imu.h
imu.cpp

encoder.h
encoder.cpp

ultrasonic.h
ultrasonic.cpp

sensor_manager.h
sensor_manager.cpp

state_estimator.h
state_estimator.cpp

main.cpp
```

---

## Sensor Manager

The Sensor Manager provides a centralized interface for all onboard sensors.

Responsibilities:

- Initialize hardware peripherals
- Collect sensor measurements
- Aggregate sensor data into a common structure
- Provide clean interfaces for higher-level modules

Example sensor data:

```cpp
struct SensorData
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
```

---

## State Estimation

The State Estimator uses IMU and wheel encoder data to estimate rover pose and motion.

Estimated states:

```cpp
x-position
y-position
heading
velocity
```

State structure:

```cpp
struct RoverState
{
    float x;
    float y;

    float heading;

    float velocity;
};
```

---

## Hardware

### Microcontroller

- ESP32

### Sensors

- IMU
- Wheel Encoders
- Ultrasonic Sensor

### Actuation

- Differential Drive Motors
- Motor Driver

---

## Future Work

- PID speed control
- PID steering control
- Extended Kalman Filter (EKF)
- Waypoint tracking
- Pure Pursuit controller
- Camera-based perception
- Autonomous path planning

---

## Skills Demonstrated

- C++
- Object-Oriented Programming
- Embedded Systems
- Sensor Integration
- State Estimation
- Robotics Software Architecture
- Autonomous Vehicle Controls
- ESP32 Development

---

## Author

Mechatronics Engineering Student

Focused on Autonomous Vehicles, Robotics, Machine Learning, and Controls Engineering.