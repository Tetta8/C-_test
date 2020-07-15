#include <iostream>

class A{
    int data = 10;
public:
    friend int add(const A& cl, int a);
    int get_data();
};

int A::get_data(){
    return data;
}

int add(const A& cl, int a){
    int x = cl.data + a;
    return x;
}

int main(){
    A a;

    std::cout << add(a, 5) << std::endl;
}