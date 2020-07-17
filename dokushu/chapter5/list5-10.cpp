#include <iostream>

int* local(){
    int i = 42;
    return &i;
}

int* dyn_alloc(){
    int* ptr = new int;
    *ptr = 42;
    return ptr;
}

int main(){
    // Segmentation fault(コアダンプ)が発生してプログラムが異常終了する。
    // int* l = local();
    // std::cout << *l << std::endl;

    int* d = dyn_alloc();
    std::cout << *d << std::endl;
    delete d;

    // 廃棄した後の為、値が不定となる
    std::cout << *d << std::endl;
}