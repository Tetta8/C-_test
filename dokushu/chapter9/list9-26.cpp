#include <iostream>

void show_value_category(int& value){
    std::cout << "参照" << std::endl;
}

void show_value_category(int&& value){
    std::cout << "右辺値参照" << std::endl;
}


template <typename T>
void forward(T&& value){
    show_value_category(std::forward<T>(value));
}

int main(){
    int i = 0;

    forward(i);
    forward(0);
}