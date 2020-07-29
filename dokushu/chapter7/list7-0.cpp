#include <iostream>

class Base{
    void private_member(){
        std::cout << "Base::private_member()" << std::endl;
    }

    int private_a = 0;
public:
    void public_member(){
        std::cout << "Base::public_member()" << std::endl;
    }

    int public_b = 1;
};

class Derived : private Base{
public:
    void member_test();
};


void Derived::member_test(){
    // private_member();                    // baaeのプライベートメンバ関数にはアクセスできない
    public_member();
    // std::cout << private_a << std::endl; // baaeのプライベートメンバ変数にはアクセスできない
    std::cout << public_b << std::endl;
    public_b = 2;
    std::cout << public_b << std::endl;
    std::cout << &public_b << std::endl;
}

int main(){
    Base base;
    Derived derived;

    // base.private_member();               // baaeのプライベートメンバ関数にはアクセスできない
    base.public_member();
    // std::cout << base.private_a << std::endl;  // baaeのプライベートメンバ変数にはアクセスできない
    std::cout << base.public_b << std::endl;

    // derived.private_member();            // baseをプライベートで継承しているためアクセスできない
    // derived.public_member();             // baseをプライベートで継承しているためアクセスできない
    derived.member_test();
    // std::cout << derived.private_a << std::endl;        // baseをプライベートで継承しているためアクセスできない
    // std::cout << derived.public_b << std::endl;         // baseをプライベートで継承しているためアクセスできない

    std::cout << base.public_b << std::endl;
    std::cout << &base.public_b << std::endl;
}
