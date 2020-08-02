#include <iostream>

class A{
    int i;
public:
    inline A();

    void set_i(int i){
        this -> i = i;
    }

    void show();
};

A::A() : i(0) { }

void A::show(){
    std::cout << i << std::endl;
}

int main(){
    A a;
    a.show();
    a.set_i(124);
    a.show();
}