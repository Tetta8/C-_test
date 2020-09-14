#include <iostream>

int main(){
    try{
        throw 0;
    }

    catch(int i){
        std::cout << i << "をキャッチしました。" << std::endl;
    }

    std::cout << "throwのあと" << std::endl;
}