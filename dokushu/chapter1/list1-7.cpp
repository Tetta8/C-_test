#include <iostream>

int main(){
    int a = 9;
    if(10 < a){
        std::cout << "変数aは10より大きいです。" << std::endl;
    }else{
        std::cout << "変数aは10以下です。" << std::endl;
    }

    std::cout << "if分のあと" << std::endl;
}