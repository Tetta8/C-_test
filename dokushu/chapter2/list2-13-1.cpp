#include <iostream>
#include <typeinfo>

using integer = int;

integer main(){
    int value = 42;
    using number = integer;

    number num = 0;

    value = num;

    std::cout << value << std::endl;

    std::cout << typeid(num).name() << std::endl;
}