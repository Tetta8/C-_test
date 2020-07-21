#include <iostream>

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int cal(int a, int b, int (*func)(int, int)){
    int result = func(a, b);
    return result;
}

int main(){
    int a = 5, b = 2;
    std::cout << "a = 5, b = 2の時、add = " << cal(a, b, &add) << std::endl;
    std::cout << "a = 5, b = 2の時、sub = " << cal(a, b, &sub) << std::endl;
}