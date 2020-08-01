#include <iostream>

int main(){
    int i = 42;

    i = 0;
    if(i > 0){
        std::cout << "if: " << i << std::endl;
    }else{
        std::cout << "else: " << i << std::endl;
    }
}