#include <iostream>
#include <typeinfo>

int main(){
    auto return_void = [](){
        std::cout << "何も返さないラムダ式" << std::endl;
    };

    auto return_int = [](){
        return 42;
    };

    auto a = return_int();

    std::cout << "aの型は「" << typeid(a).name() << "」で値は「" << a << "」です。" << std::endl;
}