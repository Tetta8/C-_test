#include <iostream>

using namespace std;

class Menmber{
    int id;
public:
    int get_id() const;
    void set_id(int new_id);
};

int Menmber::get_id() const{
    // set_id(1); // メンバ変数を書き換えるのでコンパイルエラー
    return id;
}

void Menmber::set_id(int new_id){
    id = new_id;
}

int main(){
    Menmber member1;

    member1.set_id(1);

    std::cout << "会員No." << member1.get_id() << std::endl;
}