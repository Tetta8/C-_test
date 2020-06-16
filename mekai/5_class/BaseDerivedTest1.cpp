#include <iostream>
#include "BaseDerived.h"

using namespace std;

int main(){
    Derived dv(1, 2, 3);

    cout << "dv.func()" << endl;
    dv.func();
    cout << "dv.method()" << endl;
    dv.method();
}