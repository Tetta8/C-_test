#include <iostream>

template <typename T>
class Base{
    T value1 = 10;
    T value2 = 20;

public:
    virtual T calc(){
        return value1 + value2;
    }
};

template <typename T>
class Derived : public Base<T>{
    T value1 = 10;
    T value2 = 20;
public:
    T calc(){
        return value1 * value2;
    }

};

int main(){
    Base<int> obj_b;
    Derived<float> obj_d;

    std::cout << obj_b.calc() << std::endl;
    std::cout << obj_d.calc() << std::endl;
}