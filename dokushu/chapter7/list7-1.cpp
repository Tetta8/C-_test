#include <iostream>

class Base{
protected:
    void protected_member(){
        std::cout << "Base::protected_member()" << std::endl;
    }
};

class Derived : public Base{
public:
    void member_test();
};

void Derived::member_test(){
    protected_member();
}

int main(){
    Derived derived;

    // baseクラスの被保護メンバーの為、派生クラス以外からアクセスできない
    // derived.protected_member();

    derived.member_test();
}