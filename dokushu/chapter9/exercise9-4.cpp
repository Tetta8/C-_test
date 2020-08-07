#include <iostream>
#include <typeinfo>

template <typename T>
void show(T i){
    std::cout << "プライムテンプレート：" << typeid(i).name() << std::endl;
}

template <>
void show<float>(float i){
    std::cout << "特殊化したテンプレート：" << typeid(i).name() << std::endl;
}

template <typename A>
class Base{
    A value;
public:
    void show(){
        std::cout << "プライムテンプレートクラス：" << typeid(value).name() << std::endl;
    }
};

template <>
class Base<void>{
public:
    void show(){
        std::cout << "特殊化したテンプレートクラス：" << std::endl;
    }
};

int main(){
    show<int>(10);
    show<double>(2.3);
    show<float>(3.4f);

    Base<int> obj_a;
    Base<float> obj_b;
    Base<void> obj_c;

    obj_a.show();
    obj_b.show();
    obj_c.show();
}