#include <iostream>

using namespace std;

class A{
public:
    virtual void f1(){ cout << "A::f1()" << endl;}
    virtual void f2(){ cout << "A::f2()" << endl;}
};

class B : public A{
public:
    void f2(){cout << "B::f2()" << endl;}
};

class C : public B{
public:
    void f1(){cout << "C::f1()" << endl;}
};

class D : public B{
public:
    void f1() {cout << "D::f1()" << endl;}
    void f2() {cout << "D::f2()" << endl;}
};

int main(){
    A* p;
    A a;    p = &a;     cout << "p->a" << endl;     p->f1();    p->f2();    cout << endl;
    B b;    p = &b;     cout << "p->b" << endl;     p->f1();    p->f2();    cout << endl;
    C c1;   p = &c1;    cout << "p->c1" << endl;    p->f1();    p->f2();    cout << endl;
    C c2;   p = &c2;    cout << "p->c2" << endl;    p->f1();    p->f2();    cout << endl;
    D d;    p = &d;     cout << "p->d" << endl;     p->f1();    p->f2();    cout << endl;

    return 0;
}