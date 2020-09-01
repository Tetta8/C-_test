#include <iostream>
#include <typeinfo>

class Base{
};

class Derived : public Base{
};

void function(Base& obj){
    if(typeid(obj) == typeid(Derived)){
        std::cout << "派生クラスです。" << std::endl;
    }else{
        std::cout << "基底クラスです。" << std::endl;
    }
}

int main(){
    int a = 0;
    auto lambda1 = [a](){
        std::cout << a << std::endl;
    };

    auto lambda2 = [a](){
        std::cout << a << std::endl;
    };

    lambda1();
    lambda2();

    const std::type_info& one = typeid(lambda1);
    const std::type_info& two = typeid(lambda2);

    if(one == two){
        std::cout << "同一のlambda式です。" << std::endl;
    }else{
        std::cout << "異なるlmabda式です。" << std::endl;
    }

    Derived obj_a;

    function(obj_a);
}