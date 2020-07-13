#include <iostream>

class Base{
public:
    virtual void foo();
    virtual void hee();
};

void Base::foo(){
    std::cout << "Base::foo()" << std::endl;
}

void Base::hee(){
    std::cout << "Base::hee()" << std::endl;
}

class Derived :  public Base{
public:
    void foo() override; // オーバーライド
    void foo(int i);     // オーバーロード
    using Base::hee;
    void hee(int i);
};

void Derived::foo(){
    std::cout << "Derived::foo() override" << std::endl;
}

void Derived::foo(int i){
    std::cout << "Derived::foo(" << i << ")" << std::endl;
}

void Derived::hee(int i){
     std::cout << "Derived::hee(" << i << ")" << std::endl;
}
 
int main(){
    Derived derived;
    derived.foo();
    derived.foo(42);
    derived.hee();
    derived.hee(42);
}