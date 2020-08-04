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

    std::cout << id<int>(i) << std::endl;
    std::cout << id<float>(f) << std::endl;
    std::cout << id<double>(d) << std::endl;
}