#include <vector>
#include <iostream>

int main(){
    std::vector<int> list;

    list.push_back(42);
    list.push_back(0);
    
    for(int e : list){
        std::cout << e << std::endl;
    }

    std::cout << std::endl;

    list.pop_back();
    list.push_back(-10);

    for(int e : list){
        std::cout << e << std::endl;
    }
}