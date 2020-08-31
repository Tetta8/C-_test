#include <iterator>
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

int main(){
    std::vector<int> v = {10, -3, 2, -1, -5, 4, 2};
    std::vector<int> c;

    std::copy(v.begin(), v.end(), std::back_inserter(c));

    for(auto e : c){
        std::cout << e << " ";
    }
    std::cout << std::endl;

    std::list<int> l;

    std::copy(v.begin(), v.end(), std::front_inserter(l));

    for(auto e : l){
        std::cout << e << " ";
    }
    std::cout << std::endl;

    c = {0, 0};

    std::copy(v.begin(), v.end(), std::inserter(c, c.begin() + 1));

    for(auto e : c){
        std::cout << e << " ";
    }
    std::cout << std::endl;
}