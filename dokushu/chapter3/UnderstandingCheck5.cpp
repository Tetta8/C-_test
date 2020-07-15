#include <iostream>

class A{
    int data;
public:
    static int count;
    int get_data() const;
};

int A::count = 0;

int A::get_data() const{
    ++count;

    return data;
}

int main(){
    A a;

    for(int i = 0; i < 10; i++){
        std::cout << i << "回目：" << a.get_data() << ", " << a.count << std::endl;
    }

    std::cout << A::count << "回呼び出されました。";
}