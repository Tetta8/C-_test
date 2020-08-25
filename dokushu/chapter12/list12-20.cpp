#include <iostream>
#include <list>

int main(){
    std::list<int> il = {0, 1, 2, 3, 4};
    auto top = il.begin();

    auto next = il.begin();
    ++next;

    auto bottom = il.end();
    --bottom;

    il.erase(top);
    il.push_back(5);

    for(auto iter = next; iter != bottom; ++iter){
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}