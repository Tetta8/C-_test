#include <iostream>

using namespace std;


class A{
    int a;
};

class B{
    int b;
};

class C: public A, public B{
    int c;
};

int main(){
    C c;
    A* ptr_a = &c;
    B* ptr_b = &c;

    cout << "ptr_a = " << ptr_a << endl;
    cout << "ptr_b = " << ptr_b << endl;
    cout << "&c    = " << &c << endl;

    return 0;
}