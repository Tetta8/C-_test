#include <iostream>

class Integer{
    int value;

public:
    Integer(int value) : value(value) {}

    Integer& operator=(const Integer& rhs);
    void show() const;
};

Integer& Integer::operator=(const Integer& rhs){
    std::cout << "コピー：" << value << "->" << rhs.value << std::endl;
    value = rhs.value;
    return *this;
}

void Integer::show() const{
    std::cout << "value: " << value << std::endl;
}

int main(){
    Integer x = 42;
    Integer y = 10;

    y = x;

    y.show();
}