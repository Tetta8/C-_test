#include <iostream>

int main(){
    // 練習問題1
    //double a;
    //std::cout << "実数を入力してください>";
    //std::cin >> a;
    //std::cout << "入力された文字列は\"" << a << "\"です。" << std::endl;

    // 練習問題2
    //std::string str;
    //std::cout << "文字列を入力してください>";
    //std::getline(std::cin, str);
    //std::cout << "入力された文字列は\"" << str << "\"です。" << std::endl;

    // 練習問題3
    std::string str;
    std::cout << "文字列を一行ずつ入力してください。" << std::endl;
    std::cout << "何も入力せずにエンターを入力したら終了します。" << std::endl;
    do{
        std::cout << ">";
        std::getline(std::cin, str);

        std::cout << ">>" << str << std::endl; 

    }while(str != "");

    std::cout << "入力の受付を終了しました。" << std::endl;
}