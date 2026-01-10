#ifndef L298NX2_H
#define L298NX2_H

#include <Arduino.h>

class L298NX2 {
public:
    L298NX2(int ena,int in1,int in2,int enb,int in3,int in4) {}

    void forwardA() {}
    void backwardA() {}
    void forwardB() {}
    void backwardB() {}
    void forward() {}
    void backward() {}

    void setSpeed(int s) {}
    void setSpeedA(int s) {}
    void setSpeedB(int s) {}
};

#endif // L298NX2_H
