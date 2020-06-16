#include <iostream>
#include "BaseDerived.h"

using namespace std;

int main(){
    Base bs(99, 99);

    cout << "bsの初期状態" << endl;
    bs.func();

    Derived dv(1, 2, 3);

    bs = dv;
    cout << "dvを代入した後" << endl;
    bs.func();

    // dv = bs;
}