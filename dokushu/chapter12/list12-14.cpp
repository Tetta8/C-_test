#include <iostream>
#include <vector>

int main(){
    std::vector<int> v = {0, 1, 2, 3, 4};

    auto it = v.begin() + 1;
    v.erase(it);

    for(int i : v){
        std::cout << i << std::endl;
    }
}