#include <iostream>
#include <string>
#include <vector>

class product{
    int id;
    std::string name;
    int price;
public:
    explicit product(int id, std::string name, int price)
        : id(id), name(name), price(price){}

    product() : product(0, "non", 0){}

    void show(){
        std::cout << "id:" << id << ", name:" << name << ", price: " << price << std::endl;
    }
};

// 練習問題2
int main(){
    std::vector<product> v;

    v.push_back(product{1, "smart phone", 60000});
    v.push_back(product{2, "tablet", 35000});
    v.push_back(product{});
    v.push_back(product{});

    for(product e : v){
        e.show();
    }

    std::cout << "v.size() = " << v.size() << std::endl;
}

// 練習問題1
// int main(){
//     product p[4] = {
//         product{1, "smart phone", 60000},
//         product{2, "tablet", 35000}
//     };
// 
//     for(product e : p){
//         e.show();
//     }
// 
// }