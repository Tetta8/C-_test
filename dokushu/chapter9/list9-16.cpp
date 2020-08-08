#include <iostream>

template <typename Type>
Type lea(Type ptr, Type stride, Type count, Type offset){
    return ptr + stride * count + offset;
}

int main(){
    int i = 0;

    // int型のポインタが混じっているため動作しない
    std::cout << lea(&i, 16, 4, 2) << std::endl;
}