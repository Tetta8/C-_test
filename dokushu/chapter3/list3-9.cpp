#include <iostream>

class A{
    int m_v;
public:
    explicit A(int x) : m_v(x){}

    int v() const;
};

int A::v()const{
    return m_v;
}

int main(){
    // A x = 0;
    A y(42);

    y.v() == 42;
}