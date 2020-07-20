#include <iostream>

class A{
    int a;
public:
    A(int a) : a(a){}
    ~A(){}

    int& accese_a(){ return a;}
    const int& accese_a() const;
    void show(){
        std::cout << "a = " << a << std::endl;
    }
};

int main(){
    A sample(10);

    int& value = sample.accese_a();
    std::cout << "読み出し：" << value << std::endl;
    value = 20;
    std::cout << "書き込み：" << value << std::endl;
    sample.show();

    const int& value2 = sample.accese_a();
    std::cout << "const読み出し：" << value << std::endl;
    // value2 = 30; // constの為、書き込みできない
    // std::cout << "const書き込み：" << value << std::endl;
    sample.show();
}