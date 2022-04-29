// D1.h
#pragma once
#include "B2.h"

class D2 : protected B2 {
    int d2;
public: 
    D2(int x, int y) : B2(y) { this->d2 = x; }
    ~D2() { ~d2; }
    void show_D2();
	void show_B2() { B2::show_B2(); }
};