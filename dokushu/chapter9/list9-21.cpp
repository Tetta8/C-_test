#include <iostream>
#include <string>

template<typename T>
class helper;

template<>
class helper<int>{
public:
    static std::string name() {return "int";}
};

template<>
class helper<double>{
public:
    static std::string name() {return "double";}
};

template<>
class helper<float>{
public:
    static std::string name() {return "float";}
};

template <typename T>
struct A{
    T value;
};

template <typename T>
void deduce(A<T> a){
    std::cout << helper<T>::name() << std::endl;
}

int main(){
    A<int> ai;

    deduce(ai);

    A<double> ad;
    deduce(ad);
}