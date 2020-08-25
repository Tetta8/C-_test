#include <iostream>
#include <vector>

int main(){
    // 練習問題1
    std::cout << "std::vectorのイテレータの種類は、『ランダムアクセスイテレータ』である。" << std::endl;

    // 練習問題2
    std::vector<int> v = {1, 2, 3, 4, 5};

    for(int i : v){
        std::cout << i << std::endl;
    }

    // 練習問題3
    v.push_back(11);

    for(int i : v){
        std::cout << i << std::endl;
    }

}