#include <iostream>


class Base{
    using value_type = int;
    int value;
public:
    Base(int a) : value(a){}
    int getValue() const {return value;}
};

template<typename T>
typename Base::value_type get(const Base& a){
    return a.getValue();
}

int main(){
    Base a(10);

    std::cout << "aのvalue = " << get<int>(a) << std::endl;
}