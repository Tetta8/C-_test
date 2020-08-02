#include <iostream>

class A{
    int i;
public:
    // inline関数
    A(int i) : i(i){}

    // inline関数でない
    void show();

    // inline関数
    inline void set(int i);
};

void A::show(){
    std::cout << i << std::endl;
}

void A::set(int i){
    this->i = i;
}


class product{
    int price;
public:
    product(int price) : price(price){}

    int get_price() const{ return price;}
    void set_price(int price){this->price = price;}
};

int main(){
    A object(54);

    object.show();
    object.set(19743);
    object.show();

    // 練習問題2
    product object2(1000);

    std::cout << "割引前の値段は、\"" << object2.get_price() << "\"です。" << std::endl;
    object2.set_price(900);
    std::cout << "1割引後の値段は、\"" << object2.get_price() << "\"です。" << std::endl;

}