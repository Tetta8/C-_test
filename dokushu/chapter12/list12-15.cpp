#include <iostream>
#include <vector>

int main(){
    std::vector<int> v = {0, 1, 2, 3, 4};

    v.clear();

    for(int i : v){
        std::cout << i << std::endl;
    }

    std::cout << "clearされているため表示なし" << std::endl;
}