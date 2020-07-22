#include <iostream>

int main(){
    int i = 0;
    int& j = i;
    j = 42;

    std::cout << i << std::endl;

    const int n = 42;
    const int& r = n;

    std::cout << r << std::endl;
}