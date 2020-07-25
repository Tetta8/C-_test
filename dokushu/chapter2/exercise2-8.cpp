#include <iostream>

// void show_value(int v){
//     std::cout << v << std::endl;
// }

int main(){

    auto show_value = [](int v){
        std::cout << "ラムダ式で表示：" << v << std::endl;
    };

    show_value(42);
}