#include <iostream>

// 練習問題1
template <typename T>
T id(T a){
    return a;
}

int main(){
    // 練習問題2
    int i = 10;
    float f = 20.01;
    double d = 4.2;

    std::cout << id(i) << std::endl;
    std::cout << id(f) << std::endl;
    std::cout << id(d) << std::endl;
}