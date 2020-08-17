#include <iostream>
#include <vector>

int main(){
    std::vector<int> iv = {1, 2, 3, 4, 5};
    iv.resize(4);

    std::cout << "size() = " << iv.size() << std::endl;

    for(int i : iv){
        std::cout << i << std::endl;
    }

    iv.resize(6, -1);

    std::cout << "size() = " << iv.size() << std::endl;

    for(int i : iv){
        std::cout << i << std::endl;
    }
}