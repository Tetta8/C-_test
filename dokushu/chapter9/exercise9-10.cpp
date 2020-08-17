#include <iostream>

int main(){

    auto show = [](const auto& value){
        std::cout << value << std::endl;
    };

    show(10);

    show(2.345);

    show(3.421f);

    show("abc");

    show("a");
}