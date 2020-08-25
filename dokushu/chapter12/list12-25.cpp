#include <tuple>
#include <iostream>

int main(){
    std::tuple<std::string, int , const char*> t{std::string{"stuctured"}, 42, "binding"};
    auto [a, b, c] = t;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    std::cout << std::endl;

    a = "update";
    std::cout << a <<std::endl;
    std::cout << std::get<0>(t) << std::endl;

    std::cout << std::endl;

    auto& [x, y, z] = t;

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;

    std::cout << std::endl;

    x = "update";
    std::cout << std::get<0>(t) << std::endl;
}