#include <iostream>

enum class Category{
    Value1,
    Value2,
    Value3 = 100,
    Value4,
};

int main(){
    Category cat = Category::Value3;

    std::cout << static_cast<int>(cat) << std::endl;
}