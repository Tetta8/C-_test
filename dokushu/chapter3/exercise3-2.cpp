#include <iostream>
#include <string>

class A{
    int a;
    int b;

public:
    A(int x, int y);
    ~A();

    int sum(){return a + b;}

};

A::A(int x, int y): a(x), b(y){
    std::cout << "コンストラクタ起動：" << std::endl;
    std::cout << "掛け算：" << a * b << std::endl;
}

A::~A(){
    std::cout << "引き算：" << a - b << std::endl;
    std::cout << "デストラクタ終了：" << std::endl;
}

int main(){
    A a1(3, 5);

    std::cout << "足し算：" << a1.sum() << std::endl;
}