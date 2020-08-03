#include <iostream>

void hello(){
    std::cout << "hello, world" << std::endl;
}

void goodbye(){
    std::cout << "goodbye, world" << std::endl;
}

int main(){
    hello();
    std::cout << "hello, macro" << std::endl;

#define hello goodbye

    hello();

    std::cout << "hello, macro" << std::endl;
}