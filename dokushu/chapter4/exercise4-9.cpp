#include <iostream>

void a(){
    std::cout << "a" << std::endl;
}

void b(){
    std::cout << "b" << std::endl;
}

int main(){
#define b a
    b();
#undef b
    b();
    
}