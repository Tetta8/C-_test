#include <iostream>
#include <typeinfo>

class Base{
public:
    virtual ~Base(){}
};

class DerivedA : public Base{
};

class DerivedB : public Base{
};

void detemine_class(const Base& obj){
    const std::type_info& obj_type = typeid(obj);

    if(obj_type == typeid(DerivedA)){
        std::cout << "objはDerivedA型のインスタンスです。" << std::endl;
    }else if(obj_type == typeid(DerivedB)){
        std::cout << "objはDerivedB型のインスタンスです。" << std::endl;
    }else{
        std::cout << "objはDerivedAでもDerivedBでもないインスタンスです。" << std::endl;
    }
}

class DerivedC : public Base{
};

int main(){
    DerivedA a;
    detemine_class(a);

    DerivedB b;
    detemine_class(b);

    DerivedC c;
    detemine_class(c);
}