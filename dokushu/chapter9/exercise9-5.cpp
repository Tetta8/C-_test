#include <iostream>

template<typename T>
T add(T a, T b){
    return a + b;
}

template<typename T>
class A{
    T value;
public:
    A(T a): value(a){}
    T getValue(){return value;}
};

template<typename T>
void show(A<T>& a){
    std::cout << a.getValue() << std::endl;
}

int main(){
    
    // 型類推int型
    std::cout << add(2, 3) << std::endl;

    // 型指定float型
    std::cout << add<float>(2.1, 3.2) << std::endl;

    A<int> obj_i(12);
    show(obj_i);

    A<float> obj_f(2334.42);
    show(obj_f);
}