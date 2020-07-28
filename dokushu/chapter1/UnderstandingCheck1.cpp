#include <iostream>

int main(){
    std::cout << "Hello, World" << std::endl;

    char array[] = "abcdefg";

    for(char str : array){
        std::cout << str << std::endl;
    }
}