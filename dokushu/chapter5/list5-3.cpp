#include <iostream>

int main(){
    int array[] = {0, 1, 2, 3};

    int* ptr = array;

    ptr += 2;
    std::cout << *ptr << std::endl;

    ++ptr;
    std::cout << *ptr << std::endl;

    ptr -= 2;
    std::cout << *ptr << std::endl;

    --ptr;
    std::cout << *ptr << std::endl;
}