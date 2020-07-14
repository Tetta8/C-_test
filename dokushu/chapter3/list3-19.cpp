#include <iostream>

union U{
    float f;
private:
    int i;

public:
    U();

    int get_i() const;
};

U::U() : i(0xdeadbeef){
    std::cout << "&f:" << &f << std::endl;
    std::cout << "&i:" << &i << std::endl;
}

int U::get_i() const{
    return this->i;
}

int main(){
    U u;
    std::cout << std::hex << u.get_i() << std::endl;
    u.f = 2.71828f;
    std::cout << std::hex << u.get_i() << std::endl;
}