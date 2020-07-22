#include <iostream>

union U{
    int a;
    int b;
    int c;
};

int main(){
    U u = {42};

    std::cout << "u.bの値は" << u.b << std::endl;

    u.c = 1024;

    std::cout << "u.aの値は" << u.a << std::endl;
}