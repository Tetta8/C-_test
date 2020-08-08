#include <iostream>
// 20200808時点ではコンパイラ未対応の為、エラーとなる。

template<auto i>
void show_nttp(){
    std::cout << "show_nttp<" << i << ">()" << std::endl;
}

int main(){
    show_nttp<0>();

    show_nttp<42>();
}