// D3.h
#pragma once
#include "D1.h"

class D3 : protected D1 {
    int d3;
public: 
    D3(int x, int y, int z, int k) : D1(k, y, z) { this->d3 = x; }
    ~D3() { ~d3; }
	void show_B1() { D1::show_B1(); }
	void show_B2() { D1::show_B2(); }
	void show_D1() { D1::show_D1(); }
    void show_D3();
};