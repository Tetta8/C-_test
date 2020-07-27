#include <iostream>

int absolute(int value){
    int abs = value < 0 ? -value : value;
    return abs;
}

int main(){
    std::cout << " 1の絶対値は\"" << absolute(1)   << "\"です。" << std::endl;
    std::cout << "-1の絶対値は\"" << absolute(-1) << "\"です。" << std::endl;
}