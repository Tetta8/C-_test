#include <iostream>

int sum(int lhs, int rhs);

class A{
    int m_v;
public:
    explicit A(int v) : m_v(v){}

    int v() const{return m_v;}
};

int main(){
    std::cout << "10 + 5 = " << sum(10, 5) << std::endl;

    A object(sum(20, 45));
    std::cout << "objectのm_vは" << object.v() << std::endl;
}

int sum(int lhs, int rhs){
    return lhs + rhs;
}