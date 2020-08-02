#include <iostream>

int value = 21;

void show_exetern_variable(){
    std::cout << "宣言元で呼び出し(アドレス)：" << &value << std::endl;
    std::cout << "宣言元で呼び出し(値　　　)：" << value << std::endl;
}