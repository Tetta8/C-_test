#include <iostream>
#include <utility>

class A{
    int* a;
public:
    A(std::size_t size): a{new int[size]}{}

    ~A(){delete a;}

    A(A&& other);
    A(const A& copy);

    void show(){
        std::cout << "配列のアドレス：" << a << std::endl;
    }
};

A::A(A&& other) : a{other.a}{
    other.a = nullptr;
}

A::A(const A& copy){
    a = copy.a;
} 

int main(){
    A sample1(10);
    sample1.show();

    A sample2(std::move(sample1));
    sample2.show();
    sample1.show();

    A sample3(sample2);
    sample3.show();
    sample2.show();
}