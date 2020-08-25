#include <iostream>
#include <list>

int main(){
    std::list<int> il = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto iter = il.begin();
    std::cout << *iter << std::endl;

    std::advance(iter, 3);
    std::cout << *iter << std::endl;

    auto iter2 = std::next(iter, 3);
    std::cout << *iter2 << std::endl;

    iter = std::next(iter, 4);
    std::cout << *iter << std::endl;

}