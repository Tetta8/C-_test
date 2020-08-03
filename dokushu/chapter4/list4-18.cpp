#include <iostream>

namespace{
    void say_hello(){
        std::cout << "Hello, anonymous namespace" << std::endl;
    } 
}

int main(){
    say_hello(); // 無名名前空間は名前区間の指定がない
}
