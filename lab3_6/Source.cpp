// Source.cpp
#include "D3.h"
#include "D4.h"

int main() {
    B1 o0(777);
    cout << "B1 o0(777);" << endl;
    cout << "sizeof(B1) = " << sizeof(B1) << endl;
    cout << endl << "B1 class hierarchy: " << endl;
    o0.show_B1();

    B2 o1(888);
    cout << "B2 o1(888);" << endl;
    cout << "sizeof(B2) = " << sizeof(B2) << endl;
	cout << endl << "B2 class hierarchy: " << endl;
    o1.show_B2();

    D1 o2(111, 222, 333);
    cout << "D1 o2(111, 222, 333);" << endl;
    cout << "sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << "D1 class hierarchy: " << endl;
    o2.show_D1();

    D2 o3(1000, 2000);
    cout << "D2 o3(1000, 2000);" << endl;
    cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << "D2 class hierarchy: " << endl;
    o3.show_D2();

    D3 o4(100, 200, 300, 400);
    cout << "D3 o4(100, 200, 300, 400);" << endl;
    cout << "sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl << "D3 class hierarchy: " << endl;
    o4.show_D3();

    D4 o5(1, 2, 3);
    cout << "D4 o5(1, 2, 3);" << endl;
    cout << "sizeof(D4) = " << sizeof(D4) << endl;
	cout << endl << "D4 class hierarchy: " << endl;
    o5.show_D4();

    system("pause");
    return 0;
}
