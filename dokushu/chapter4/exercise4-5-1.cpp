#include <iostream>

extern int value;
void show_exetern_variable();

int main(){
    std::cout << "mainで呼び出し(アドレス)：" << &value << std::endl; 
    std::cout << "mainで呼び出し(値　　　)：" << value << std::endl;

    value = 1456;

    show_exetern_variable();
}