#include <iostream>

class Base{
public:
    virtual void method();
};

void Base::method(){
    std::cout << "Baseのメンバー関数" << std::endl;
}

class Derived : public Base{
public:
    // Base::method()をオーバーライド
    void method() override;
};

void Derived::method(){
    std::cout << "Derivedでオーバーライドしたメンバー関数" << std::endl;
}

int main(){
    Derived derived;
    Base& base = derived;

    base.method();
}