#include <iostream>

class product{
    int id;
public:
    int get_id();
    int get_id() const;
};

int product::get_id(){
    std::cout << "非constメンバ関数のget_id()が呼ばれました。" << std::endl;
    return id;
}

int product::get_id() const {
    std::cout << "constメンバ関数のget_id()が呼ばれました。" << std::endl;
}

int main(){
    product p;
    p.get_id();

    const product cp{}; // constのインスタンスにするとconst関数が呼び出される
    cp.get_id();
}
