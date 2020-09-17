#include <string>
#include <iostream>

int main(){
    std::string str = "C++";
    std::cout << str.length() << std::endl;

    str.clear();

    if(str.empty()){
        std::cout << "emptye." << std::endl;
    }

    str = "漢字";
    std::cout << str.length() << std::endl;
}