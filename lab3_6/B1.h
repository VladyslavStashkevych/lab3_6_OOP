// B1.h
#pragma once
#include <iostream> 

using namespace std;

class B1 {
    int b1;
public:
    B1() : b1(0) {}
    B1(int x) { this->b1 = x; }
    ~B1() { ~b1; }
    void show_B1();
};