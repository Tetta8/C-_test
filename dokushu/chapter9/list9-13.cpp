#include <iostream>
#include <vector>

int main(){
    std::vector<int> v{10, 20, 30};

    // 型を間違えている為、エラーになる。
    // std::vector<float>::reference r = v[0];
    std::vector<int>::reference r = v[0];

    const auto& cr = v[0];
}