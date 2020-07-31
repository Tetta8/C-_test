#include <iostream>

class Base{
public:
    Base(int value){
        std::cout << "Base:" << value << std::endl;
    }
};

class DerivedA : virtual public Base{
public:
    DerivedA() : Base(1){
        std::cout << "DerivedA:" << std::endl;
    }
};

class DerivedB : virtual public Base{
public:
    DerivedB() : Base(2){
        std::cout << "DerivedB:" << std::endl;
    }
};

class MoreDerived : public DerivedB, public DerivedA{
public:
    MoreDerived() : Base(3){
        std::cout << "MoreDerived:" << std::endl;
    }
};

int main(){
    MoreDerived object;
}