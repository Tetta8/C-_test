#include <iostream>

using namespace std;

class A{
public:
    void f() {cout << "A::f()" << endl;}
};

class B : public A{
public:
    virtual void f() {cout << "B::f()" << endl;}
};

class C : public B{
public:
    void f(){cout << "C::f()" << endl;}
    void f(int) {cout << "C::f(int)" << endl;}
};

int main(){
    A a;
    B b;
    C c;
    A* p = &b;
    B* q = &c;

    a.f();
    b.f();
    c.f();
    c.f(1);
    p->f(); // 静的紐づけ
    q->f(); // 動的紐づけ
}