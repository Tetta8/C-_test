#include <iostream>

class product{
    int id;
public:
    int get_id() const;
    void set_id(int new_id);
};

int product::get_id() const{
    // set_id(1); // const関数ではメンバ変数の書き換えは呼び出せない
    return id;
}

void product::set_id(int new_id){
    id = new_id;
}

int main(){
    const product cp{};

    std::cout << cp.get_id() << std::endl;
}
