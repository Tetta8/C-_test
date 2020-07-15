#include <iostream>

class Sample{
    static int count;
public:
    Sample(){ ++count; };
    static int get_count();
};


int Sample::count = 0;

int Sample::get_count(){
    return count;
}

void ins(){
    Sample no3;
}

int main(){
    std::cout << "インスタンス化前：" << Sample::get_count() << std::endl;

    Sample no1;
    std::cout << "1つ目" << Sample::get_count() << std::endl;
    
    Sample no2;
    std::cout << "2つ目" << Sample::get_count() << std::endl;

    ins();
    std::cout << "3つ目作成して削除" << no2.get_count() << std::endl;
}