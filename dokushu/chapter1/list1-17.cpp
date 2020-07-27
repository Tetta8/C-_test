#include <iostream>

int main(){
    char c = 99;
    std::cout << "キャスト変換無し：" << c << std::endl;
    std::cout << "キャスト変換有り：" << static_cast<int>(c) << std::endl;
}