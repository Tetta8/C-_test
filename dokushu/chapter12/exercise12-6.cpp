#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    std::vector<int> v = {10, 5, 8, 3, -1, 8, 5, -7, 8};
    
    std::cout << "練習問題1" << std::endl;
    int number = 3;
    auto iter = std::find(v.begin(), v.end(), number);
    if(iter != v.end()){
        std::cout << *iter << std::endl;
    }else{
        std::cout << number << "は含まれません。" << std::endl; 
    }

    number = 2;
    iter = std::find(v.begin(), v.end(), number);
    if(iter != v.end()){
        std::cout << *iter << std::endl;
    }else{
        std::cout << number << "は含まれません。" << std::endl; 
    }
    std::cout << std::endl;

    std::cout << "練習問題2" << std::endl;
    std::cout << "ソート前"  << std::endl;
    for(auto i : v){
        std::cout << i << " ";
    } 
    std::cout << std::endl;
    std::cout << "ソート後"  << std::endl;
    std::sort(v.begin(), v.end(), [](int l, int r){return l > r;});
    for(auto i : v){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "練習問題3" << std::endl;
    std::vector<int> c;
    std::copy(v.begin(), v.end(), std::back_inserter(c));
    for(auto i : c){
        std::cout << i << " ";
    }
    std::cout << std::endl;

}