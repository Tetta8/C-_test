#include <iostream>
#include <typeinfo>

int main(){
    int array[] = {5, 4, 3, 2, 1};

    for(auto e : array){
        std::cout << e << std::endl;
        std::cout << typeid(e).name() << std::endl;
    }
}