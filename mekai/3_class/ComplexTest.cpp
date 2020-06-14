#include <iostream>
#include "Complex.h"

using namespace std;

int main(){
    double re, im;

    cout << "aの実部："; cin >> re;
    cout << "aの虚部："; cin >> im;
    Complex a(re, im);

    cout << "bの実部："; cin >> re;
    cout << "bの虚部："; cin >> im;
    Complex b(re, im);

    Complex c = -a + b;

    b += 2.0;
    c -= Complex(1.0, 1.0);
    Complex d(b.imag(), c.real());

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    return 0;
}