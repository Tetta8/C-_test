#include <iostream>

int main(){
    int array[] = {4, 2, 1, 9, 5};

    // 練習問題1
    int i = 4;
    while(i >= 0){
        std::cout << array[i] << std::endl;
        i -= 1;
    }

    std::cout << std::endl;
    // 練習問題2
    for(int i = 4; i >= 0; i--){
        std::cout << array[i] << std::endl;
    }

    std::cout << std::endl;
    // 練習問題3
    i = 4;
    do{
        std::cout << array[i] << std::endl;
        i--;
    }while(i >= 0);

}