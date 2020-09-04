#include <iostream>

class Floater{
    float value;
public:
    Floater(float value):value(value){}

    Floater operator+(const Floater& rhs) const{return Floater(value + rhs.value);}
    Floater operator-(const Floater& rhs) const{return Floater(value - rhs.value);}
    Floater operator*(const Floater& rhs) const{return Floater(value * rhs.value);}
    Floater operator/(const Floater& rhs) const{return Floater(value / rhs.value);}

    Floater operator+() const{return *this;}
    Floater operator-() const{return Floater(-value);}

    Floater& operator++() {
        ++value;
        return *this;
    }
    Floater& operator--() {
        --value;
        return *this;
    }

    Floater operator++(int){
        auto tmp = *this;
        ++*this;
        return tmp;
    }

    Floater operator--(int){
        auto tmp = *this;
        --*this;
        return tmp;
    }

    void show(){
        std::cout << "value = " << value << std::endl;
    }
};

int main(){
    Floater a(1.3f);
    Floater b(2.35f);

    auto v1 = a + b;
    v1.show();

    auto v2 = b * a;
    v2.show();

    auto v3 = b - a;
    v3.show();

    auto v4 = a / b;
    v4.show();

    auto v5 = -a;
    v5.show();

    auto v6 = b;
    v6.show();

    auto v7 = ++a;
    v7.show();

    auto v8 = --a;
    v8.show();

    std::cout << std::endl;
    auto v9 = a++;
    v9.show();
    a.show();

    std::cout << std::endl;
    auto v10 = a--;
    v10.show();
    a.show();
}