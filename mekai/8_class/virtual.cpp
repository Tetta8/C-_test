#include <iostream>

using namespace std;

class A{
    int a;
public:
    A() : a(0){}
    int get_a() {return a;}
    void set_a(int v) { a = v;}
};

class X : virtual public A{
public:
    int get_a() {return A::get_a();}
    void ste_a(int v) {return A::set_a(v);}
};

class Y : virtual public A{
public:
    int get_a() {return A::get_a();}
    void set_a(int v) { A::set_a(v);}
};

class Z : public X, public Y{

};

int main(){
    Z obj;

    cout << "X::get_a() = " << obj.X::get_a() << endl;
    cout << "Y::get_a() = " << obj.Y::get_a() << endl;

    obj.X::set_a(5);
    cout << "X::get_a() = " << obj.X::get_a() << endl;
    cout << "Y::get_a() = " << obj.Y::get_a() << endl;

    return 0;
}