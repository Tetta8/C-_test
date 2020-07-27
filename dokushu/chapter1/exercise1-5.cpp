#include <iostream>

void show_value(float f){
    std::cout << f << std::endl;
}

int main(){
    float i = 42.195f;
    show_value(i);

    float f = 100.001f;
    f -= 100;
    std::cout << f << std::endl;

    int n = 0;
    int* ptr = &n;
    *ptr = 42;
    std::cout << n << std::endl;
}