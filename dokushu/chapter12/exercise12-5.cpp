#include <iostream>
#include <set>

int main(){
    std::set<int> int_set = {1, 2, 4, 5};

    std::cout << "【挿入前】" << std::endl;
    for(auto iter = int_set.begin(); iter != int_set.end(); ++iter){
        std::cout << *iter << std::endl;
    }
    std::cout << std::endl;

    std::cout << "【重複無し挿入】" << std::endl;

    int_set.insert(3);
    int_set.insert(8);
    for(auto iter = int_set.begin(); iter != int_set.end(); ++iter){
        std::cout << *iter << std::endl;
    }
    std::cout << std::endl;
    
    std::cout << "【重複有り挿入】" << std::endl;
    int_set.insert(4);
    int_set.insert(8);
    int_set.insert(6);
    for(auto iter = int_set.begin(); iter != int_set.end(); ++iter){
        std::cout << *iter << std::endl;
    }
    std::cout << std::endl;
    

}