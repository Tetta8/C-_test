#include <iostream>

void no_throw_exeption() noexcept{
    try{
        throw 0;
    }
    catch(...){
        std::cout << "例外を捕まえました" << std::endl;
    }
}

int main(){
    no_throw_exeption();
    std::cout << "関数の後" << std::endl;
}