#include <iostream>

void hello_world(){
    std::cout << "hello, world" << std::endl;
}

int sum(int a, int b, int c){
    return a + b + c;
}


int main(){
    // 練習問題1
    hello_world();

    // 練習問題2
    std::cout << "sum(5, 1, -2):" << sum(5, 1, -2) << std::endl;
}