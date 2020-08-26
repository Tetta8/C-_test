#include <map>
#include <iostream>

int main(){
    std::multimap<std::string, float> w;

    w.insert(std::pair<std::string, float>{"U", 235.04f});
    w.insert(std::pair<std::string, float>{"U", 238.05f});

    w.insert(std::pair<std::string, float>{"Pu", 238.05f});
    w.insert(std::pair<std::string, float>{"Pu", 239.05f});
    w.insert(std::pair<std::string, float>{"Pu", 240.05f});

    auto pu = w.equal_range("Pu");

    for(auto iter = pu.first; iter != pu.second; ++iter){
        std::cout << iter->first << ": " << iter->second << std::endl;
    }

    std::size_t erased = w.erase("Pu");
    std::cout << "elements num:" << erased << std::endl;

    for(auto iter = w.begin(); iter != w.end(); ++iter){
        std::cout << iter->first << ": " << iter->second << std::endl;
    }

    std::cout << std::endl;
}