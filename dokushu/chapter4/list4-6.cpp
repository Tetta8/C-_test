#include <iostream>

class A{
public:
    A();
    ~A();
};

A::A(){
    std::cout << "コンストラクタ" << std::endl;
}

A::~A(){
    std::cout << "デストラクタ" << std::endl;
}

A a;

int main(){
    std::cout << "main()関数" << std::endl;
}