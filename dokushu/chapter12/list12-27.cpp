#include <iostream>
#include <set>

int main(){
    std::set<int> is = {3, 1, 0, 2, 4};

    is.insert(is.end(), -1);

    is.insert(-2);

    for(auto iter = is.begin(); iter != is.end(); ++iter){
        std::cout << *iter << std::endl;
    }
}