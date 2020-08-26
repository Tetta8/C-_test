#include <iostream>
#include <set>

int main(){
    std::set<int> is = {1, 3, 5, 7};
    auto first = is.begin();
    auto last = is.end();

    is.insert(8);
    is.erase(is.find(3));

    while(first != last){
        std::cout << *first << ' ';
        ++first;
    }
    std::cout << std::endl;
}