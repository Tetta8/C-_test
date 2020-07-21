#include <iostream>

class C{
    int a;
public:
    explicit C(int c) : a{a}{}

    void copy_and_set(int value) const{
        std::cout << "copy_and_set : a == " << a <<std::endl;
        [*this, value]() mutable{
            std::cout << "lambda : a == " << a << std::endl;
            // a = value;
            std::cout << "lambda : a == " << a << std::endl;
        }();

        std::cout << "copy_and_set : a == " << a << std::endl;
    }

};

int main(){
    C c{42};

    c.copy_and_set(0);
}