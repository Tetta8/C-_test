#include <iostream>

int main(){
    int i = 42;

    {
        int i = 72;
        std::cout << "inner:" << &i << "i " << i << std::endl;

        i = 0;
    }

    std::cout << "outer: " << &i << ": " << i << std::endl;
}