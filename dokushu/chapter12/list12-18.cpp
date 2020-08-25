#include <iostream>
#include <list>
#include <iterator>

int main(){
    std::list<int> l = {1, 5, 9, 13};

    auto iter = l.begin();

    std::advance(iter, 1);

    auto iter2 = std::prev(iter);
    std::cout << "*iter2: " << *iter2 << std::endl;

    auto iter3 = std::next(iter, 2);
    std::cout << "*iter3: " << *iter3 << std::endl;

    std::cout << "*iter: " << *iter << std::endl; 

}