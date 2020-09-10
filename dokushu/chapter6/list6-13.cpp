#include <iostream>

class Counter{
    int value;

public:
    Counter() : value{0} {}

    int operator()();
    int operator()(int n);

    void show() const;
};

int Counter::operator()(){
    return ++value;
}

int Counter::operator()(int n){
    return value += n;
}

void Counter::show() const{
    std::cout << "Counter.value = " << value << std::endl;
}

int main(){
    Counter c;

    c();
    c();
    c();
    c.show();
    c(-3);

    c.show();
}