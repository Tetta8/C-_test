#include <iostream>

template <typename T>
class A{
    T value;
public:
    A(T value) : value(value){}

    template <typename Y>
    void show(Y abc);  
};

template <typename T>
template <typename Y>
void A<T>::show(Y abc){
    std::cout << "value = " << value << ", abc = " << abc << std::endl;
}

int main(){
    A<int> obj(42);

    obj.show<float>(2.34f);
}