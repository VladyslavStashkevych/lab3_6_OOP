// D4.h
#pragma once
#include "D2.h"

class D4 : public D2 {
    int d4;
public: 
    D4(int x, int y, int z) : D2(z, y) { this->d4 = x; }
    ~D4() { ~d4; }
    void show_D4();
};