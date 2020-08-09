#include <iostream>

template <typename T>
void show(const T& value){
    std::cout << "引数は\"" << value << "\"です。" << std::endl;
}

template <typename T>
void show_a(T& value){
    std::cout << "引数は左辺値の\"" << value << "\"です。" << std::endl;    
}

template <typename T>
void show_a(T&& value){
    std::cout << "引数は右辺値の\"" << value << "\"です。" << std::endl;    
}


int main(){
    int i = 0;

    show<int>(i);
    show(0);

    show_a(i);
    show_a(0);
}