#include <iostream>

int fused_multiply_add(int a, int b, int c){
    int r = a + b + c;
    return r;
}

float fused_multiply_add(float a, float b, float c){
    float r = a + b + c;
    return r;
}

int main(){
    std::cout << fused_multiply_add(1, 2, 3) << std::endl;

    std::cout << fused_multiply_add(1.23456f, 1.23456f, 1.23456f) << std::endl;

    std::cout << fused_multiply_add(1.23456, 1, 1.23456) << std::endl;
}