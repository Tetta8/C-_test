#include <iostream>

int& id(int& i){
    return i;
}

int main(){
    int i = 42;
    auto& j = id(i);

    j = 0;

    std::cout << i << std::endl;
}