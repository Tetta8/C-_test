#include <iostream>

class BaseA{
public:
    void method_BaseA(){
        std::cout << "BaseA::method_BaseA()" << std::endl;
    }
};

class BaseB{
public:
    void method_BaseB(){
        std::cout << "BaseB::method_BaseB()" << std::endl;
    }
};

class Derived : public BaseA, public BaseB{
public:
    void method_Derived(){std::cout << "Derived::method_Drived()" << std::endl;}
};

int main(){
    Derived derived;
    derived.method_BaseA();
    derived.method_BaseB();
    derived.method_Derived();
    std::cout << std::endl;

    BaseA& base_a = derived;

    base_a.method_BaseA();
    // base_a.method_BaseB();
    // base_a.method_Drived();

    std::cout << std::endl;
    
    BaseB& base_b = derived;

    // base_b.method_BaseA();
    base_b.method_BaseB();
    // base_b.method_Drived();
}