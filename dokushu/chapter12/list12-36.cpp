#include <vector>
#include <algorithm>
#include <iostream>

int main(){
    std::vector<int> v = {10, -3, 0, 4, 2};

    auto c = v;

    std::sort(c.begin(), c.end());
    for(auto e : c){
        std::cout << e << " ";
    }
    std::cout << std::endl;

    c = v;
    std::sort(c.begin(), c.end(), [](int l, int r){return l > r;});
    for(auto e : c){
        std::cout << e << " ";
    }
    std::cout << std::endl;
}