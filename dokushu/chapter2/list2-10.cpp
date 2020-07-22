#include <iostream>
#include <typeinfo.h>

int one(){
    return 1;
}

int main(){
    auto d = 3.14;
    std::cout << typeid(d).name() << std::endl; 

    d = 2.71f;

    std::cout << d << std::endl;
    std::cout << typeid(d).name() << std::endl; 

    auto i = one();
    std::cout << typeid(i).name() << std::endl; 
    i = 42.195;

    std::cout << i << std::endl;
    std::cout << typeid(i).name() << std::endl; 

}