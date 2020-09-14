#include <iostream>

void throw_zero(){
    throw 0;
}

int main(){
    try{
        throw_zero();
    }

    catch(float f){
        std::cout << "float型の例外オブジェクトを捕まえました 値 =" 
                  << f << std::endl;
    }

    catch(...){
        std::cout << "未対応の例外オブジェクトを捕まえました" << std::endl;
    }

    std::cout << "catch後" << std::endl;
}