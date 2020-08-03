#include <iostream>

#define PLUS(a, b) (a + b)
#define HOGE

int main(){
#if PLUS( 1, 0 )
    std::cout << "PLUS(defined(HOGE), 0)はtrueです。" << std::endl;
#else
    std::cout << "PLUS(defined(HOGE), 0)はfalseです。" << std::endl;
#endif
}