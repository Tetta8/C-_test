#include <iostream>

int main(){
    auto show = [](int i) -> void{
        std::cout << "iの値は" << i << "です。" << std::endl;
    };

    show(42);
}