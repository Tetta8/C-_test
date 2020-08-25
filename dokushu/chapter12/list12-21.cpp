#include <iostream>
#include <list>
#include <iterator>

int main(){
    std::list<int> il0 = {0, 1, 5, 6};
    std::list<int> il1 = {2, 4, 6};
    std::list<int> il2 = {3, 4};

    auto iter = il0.begin();
    std::advance(iter, 2);

    il0.splice(iter, il1, il1.begin());

    std::cout << "il0:" << std::endl;
    for(auto it = il0.begin(); it != il0.end(); ++it){
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "il1:" << std::endl;
    for(auto it = il1.begin(); it != il1.end(); ++it){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}