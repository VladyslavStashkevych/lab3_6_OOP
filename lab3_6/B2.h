// B2.h
#pragma once
#include <iostream> 

using namespace std;

class B2 {
    int b2;
public:
    B2() : B2(0) {}
    B2(int x) { this->b2 = x; }
    ~B2() { ~b2; }
    void show_B2();
};