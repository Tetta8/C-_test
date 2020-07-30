#include <iostream>

class Base{
    virtual void private_method(){std::cout << "Baseのプライベートメソッドです。" << std::endl;}
public:
    virtual ~Base(){std::cout << "Baseのデストラクタ" << std::endl;}
    virtual void method(){
        std::cout << "Baesのメソッド関数です。" << std::endl;
        private_method();
    }
};

class Derived : public Base{
    void private_method() override{std::cout << "オーバーライドしたプライベートメソッドです。" << std::endl;}
public:
    ~Derived() override {std::cout << "オーバーライドしたデストラクタ" << std::endl;}
    void method() override {
        std::cout << "オーバーライドしたメソッドです。" << std::endl;
        private_method();
    }
};

int main(){
    Base* object = new Derived;

    object->method();
    delete object;
}