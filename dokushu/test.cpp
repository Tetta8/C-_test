#include <iostream>

class Base{
    int a = 2;
    int b = 3;
public:
    virtual int sum(){return this->a + this->b;}
};

class Derived : public Base{
    int a = 5;
    int b = 6;
public:
    int sum() override {return a + b;}
};


int main(){
    Base* object_A = new Derived;
    Derived object_B;
    std::cout << object_A->sum() << std::endl;
    std::cout << object_B.sum() << std::endl;
    std::cout << object_B.Base::sum() << std::endl;
} 