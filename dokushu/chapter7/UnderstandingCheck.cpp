#include <iostream>

class Base{
public:
    virtual void method(){
        std::cout << "Base::methodを実行" << std::endl;
    }
};

class Derived : public Base{
public:
    void method() override{
        std::cout << "Derived::methodを実行" << std::endl;
    }
};

int main(){
    Base object_base;
    Derived object_deribed;

    object_base.method();
    object_deribed.method();
}