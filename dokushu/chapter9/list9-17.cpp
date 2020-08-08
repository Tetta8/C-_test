#include <iostream>

template <typename P, typename S, typename C, typename O>
auto lea(P prt, S stride, C count, O offset){
    return prt + stride * count + offset;
}

int main(){
    int i = 0;

    std::cout << lea(&i, 16, 4, 2) << std::endl; 
}