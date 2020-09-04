#include <iostream>

class Floater{
    float value;
public:
    Floater(float value):value(value){}

    float operator+(const Floater& rhs){return value + rhs.value;}
    float operator-(const Floater& rhs){return value - rhs.value;}
    float operator*(const Floater& rhs){return value * rhs.value;}
    float operator/(const Floater& rhs){return value / rhs.value;}

    void show(){
        std::cout << "value = " << value << std::endl;
    }
};

int main(){
    Floater a(1.3f);
    Floater b(2.35f);

    Floater v1 = a + b;
    v1.show();

    Floater v2 = b * a;
    v2.show();

    Floater v3 = b - a;
    v3.show();

    Floater v4 = a / b;
    v4.show();
}