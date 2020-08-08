#include <iostream>

template <int i>
void add(int a){
    std::cout << i + a << std::endl;
}

int main(){
    add<2>(6);
}

// 練習問題2は20200808時点のコンパイラでは未対応