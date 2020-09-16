#include <iostream>
#include <string>

int main(){
    std::string strA = "Hello, ";
    std::string strB = "world.";

    std::string strC = strA + strB;
    std::cout << strC << std::endl;

    if(strC == "Hello, world."){
        std::cout << "ok." << std::endl;
    }
}