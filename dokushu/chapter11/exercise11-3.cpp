#include <iostream>

class Base{
public:
    virtual ~Base(){}

    const char* get_name() const{return "Base";}
};

class Derived : public Base{
public:
    const char* get_name() const{return "Derived";}
};

class MoreDerived : public Derived{
public:
    const char* get_name() const{return "MoreDerived";}
};

int main(){
    Base obj_b;
    Derived obj_d;
    MoreDerived obj_md;

    std::cout << obj_b.get_name() << std::endl;
    std::cout << obj_d.get_name() << std::endl;
    std::cout << obj_md.get_name() << std::endl;
    std::cout << std::endl;

    Derived* ptr_d = static_cast<Derived*>(&obj_b);
    std::cout << ptr_d->get_name() << std::endl;

    MoreDerived* ptr_md = dynamic_cast<MoreDerived*>(&obj_b);
    if(ptr_md){
        std::cout << ptr_md->get_name() << std::endl;
    }else{
        std::cout << "キャストに失敗しました" << std::endl;
    }

    ptr_d = static_cast<Derived*>(&obj_b);
    if(ptr_d){
        std::cout << ptr_d->get_name() << std::endl;
    }else{
        std::cout << "キャストに失敗しました" << std::endl;
    }
    std::cout << std::endl;

    std::cout << "RTTIとは" << std::endl;
    std::cout << "実行時にオブジェクトの型情報を調べる機能。" << std::endl;
}