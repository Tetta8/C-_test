#include <iostream>

template <typename A, typename B, typename C>
auto fused_multiply_add(A a, B b, C c){
    return a * b + c;
}

int main(){
    std::cout << fused_multiply_add<float, float>(1.23456f, 2, 3) << std::endl;
    std::cout << fused_multiply_add(1.23456f, static_cast<float>(2), 3) << std::endl; 
}