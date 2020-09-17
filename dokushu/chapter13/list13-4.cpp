#include <string>
#include <iostream>

int main(){
    std::string str{"Hello\0wrold", 11};
    std::cout << str << std::endl;

    for(char ch : str){
        std::cout << (ch == '\0' ? '_' : ch);
    }

    std::cout << std::endl;
}