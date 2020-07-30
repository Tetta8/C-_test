#include <iostream>

class BaseA{
    int value;
public:
    BaseA(int a) : value(a){std::cout << "BaseAのコンストラクタ" << std::endl;}
    void show(){std::cout << "BaseAのvalue = " << value << std::endl;}
};

class BaseB{
    int value;
public:
    BaseB(int b) : value(b){std::cout << "BaseBのコンストラクタ" << std::endl;}
    void show(){std::cout << "BaseBのvalue = " << value << std::endl;}
};

class DeveidA : public BaseA, public BaseB{
public:
    DeveidA() : BaseB(1), BaseA(2){std::cout << "DeviedAのコンストラクタ" << std::endl;}
};

class DeveidB : public BaseB, public BaseA{
public:
    DeveidB() : BaseA(3), BaseB(4){std::cout << "DeviedBのコンストラクタ" << std::endl;}
};

int main(){
    std::cout << "DeveidAをインスタンス化" << std::endl;
    DeveidA objectA;
    std::cout << std::endl;
    objectA.BaseA::show();
    objectA.BaseB::show();

    std::cout << std::endl;
    std::cout << "DeveidBをインスタンス化" << std::endl;
    DeveidB objectB;
    std::cout << std::endl;
    objectB.BaseA::show();
    objectB.BaseB::show();
}