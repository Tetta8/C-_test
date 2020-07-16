#include <iostream>

int main(){
    int array[] = {0, 1, 2, 3};
    int array2[] = {9, 8, 7, 6};

    std::cout << "先頭のアドレス：" << &array[0] << std::endl;

    int* ptr = array;

    const int* ptr2 = array2; 

    std::cout << "ポインタ：" << ptr << std::endl;
    std::cout << "値：" << *ptr << std::endl;

    *ptr = 4;
    std::cout << "ptr値：" << *ptr << std::endl;

    // *ptr2 = 4;   // constのため中身を変更できない
    std::cout << "ptr2値：" << *ptr2 << std::endl;

    ptr2 = array;   // constでもポインタが示すアドレスは変更できる。
    std::cout << "ptr2値：" << *ptr2 << std::endl;

}