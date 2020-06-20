#include <iostream>

using namespace std;

class Base{
public:
    Base() {cout << "Bassのコンストラクタ" << endl;}
    virtual ~Base() {cout << "Bassのデストラクタ" << endl;}
};

class Derived : public Base{
    int *a;
public:
    Derived() {a = new int[10];  cout << "配列を生成" << endl;}
    ~Derived() {delete[] a;      cout << "配列を解放" << endl;}
};

int main(){
    Base* ptr = new Derived;
    delete ptr;
}