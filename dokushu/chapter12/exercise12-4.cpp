#include <iostream>
#include <utility>
#include <tuple>

int main(){
    std::pair<int, std::string> obj_pair{30, "hello!!"};
    std::cout << obj_pair.first << ", " << obj_pair.second << std::endl;

    std::cout << std::endl;

    std::tuple<int, float, std::string> obj_tuple{20, 3.14f, "good!!"};

    std::cout << std::get<0>(obj_tuple) << std::endl;
    std::cout << std::get<1>(obj_tuple) << std::endl;
    std::cout << std::get<2>(obj_tuple) << std::endl;

    std::cout << std::endl;

    auto& [a, b, c] = obj_tuple;

    a = 456;

    std::cout << std::get<0>(obj_tuple) << std::endl;
    std::cout << std::get<1>(obj_tuple) << std::endl;
    std::cout << std::get<2>(obj_tuple) << std::endl;

    std::cout << std::endl;

    std::cout << "構造化束縛とは何か？" << std::endl;
    std::cout << "タプルや配列の要素を分解し、個別の変数として扱えるようにする方法。" << std::endl;
    std::cout << "C++17からサポートされている機能である。";
}