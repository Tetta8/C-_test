#include <iostream>

class Base{
public:
    virtual void method();
};

void Base::method(){
    std::cout << "Base::method()" << std::endl;
}

class Derived : public Base{
public:
    void method() override;
};

void Derived::method(){
    std::cout << "Derived::method()" << std::endl;
    Base* base = this;
    base->method();
}

int main(){
    Derived derived;
    derived.method();
}