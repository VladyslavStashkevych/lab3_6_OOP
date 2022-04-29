// D1.h
#pragma once
#include "B1.h"
#include "B2.h"

class D1 : public B1, private B2 {
    int d1;
public: 
    D1(int x, int y, int z) : B1(y), B2(z) { this->d1 = x; }
	~D1() { ~d1; }
    void show_D1();
};