#include <iostream>
// 練習問題1
struct product{
    int id;
    int price;
    int stock;
};

void show_product(product* product){
    std::cout << "商品ID：" << product->id << std::endl;
    std::cout << "単価  ：" << product->price << std::endl;
    std::cout << "在庫数：" << product->stock << std::endl;
}

struct S{
    int x;
    int y;
};

union U{
    S s;
};

// 練習問題2
int main(){
    // 練習問題1
    product pen = {
        0,
        100,
        200,
    };
    std::cout << "練習問題1" << std::endl;
    show_product(&pen);

    std::cout << std::endl;

    // 練習問題2
    U u = {};
    u.s.x = 10;
    u.s.y = 20;

    std::cout << "練習問題2" << std::endl;
    std::cout << u.s.x << std::endl;
    std::cout << u.s.y << std::endl;
}