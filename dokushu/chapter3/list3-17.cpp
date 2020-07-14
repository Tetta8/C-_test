#include <iostream>

class A{
    int value;
public:
    void set_value(int value);
    int get_value() const;
    int get_value2() const;
};

void A::set_value(int value){
    // value = value; // エラーで検出できないが引数への代入となるため、意図した動作にならない
    this->value = value;
}

int A::get_value() const{
    return value;
}

int A::get_value2() const{
    // this->value = 1;
    // this->set_value(0);

    return this->get_value();
}

int main(){
    A a;
    a.set_value(42);
    std::cout << a.get_value() << std::endl;
}