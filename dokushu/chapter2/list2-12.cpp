#include <iostream>
#include <typeinfo>

decltype(1) one(){
    return 1;
}

int main(){
    auto i = one();

    decltype(i) j;

    j = 42.195;

    std::cout << j << std::endl;
    std::cout << typeid(j).name() << std::endl;
}