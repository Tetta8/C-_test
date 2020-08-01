#include <iostream>

// ダングリングポインタの為、基本実行しないこと

int* dangling_pointre(){
    int i = 0;
    return &i;
}

int main(){
    int* p = dangling_pointre();
    *p = 42;
}