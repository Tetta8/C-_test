#include <iostream>

class Base{
public:
    Base(){std::cout << "Baseのコンストラクタ" << std::endl;}
    Base(int i){std::cout << "引数付きのBaseのコンストラクタ：" << i << std::endl;}
    ~Base(){std::cout << "Baseのデストラクタ" << std::endl;}
};

class Derived : public Base{
public:
    Derived(int i) : Base(i){std::cout << "Derivedのコンストラクタ" << std::endl;}
    ~Derived(){std::cout << "Derivedのデストラクタ" << std::endl;}
};

int main(){
    Derived test(20);
    std::cout << "Derivedクラスをインスタンス化" << std::endl;
}