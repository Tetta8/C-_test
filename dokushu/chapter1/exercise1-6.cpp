#include <iostream>
#include <string>

int main(){
    // 練習問題1
    int array[] = {4, 2, 1, 9, 5};

    std::cout << array[0] << std::endl;
    std::cout << array[1] << std::endl;
    std::cout << array[2] << std::endl;
    std::cout << array[3] << std::endl;
    std::cout << array[4] << std::endl;

    std::cout << std::endl;

    // 練習問題2
    char string[] = {'a', 'b', 'c' , '\0', 'd'};

    std::cout << string << std::endl;

    std::cout << std::endl;

    // 練習問題3
    std::string str = "abc\0d";
    std::cout << str << std::endl;
    
}