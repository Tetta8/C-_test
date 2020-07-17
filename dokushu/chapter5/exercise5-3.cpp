#include <iostream>

class Test{
    int a;
    int b;
public:
    explicit Test(int a, int b):a(a), b(b){
        std::cout << "コンストラクタ" << std::endl;
    }

    ~Test(){
        std::cout << "デストラクタ" << std::endl;
    }

    void show(){
        std::cout << "a:" << a << ", b:" << b << std::endl;
    }
};

Test* make(){
    Test* sample = new Test(1, 2);

    sample->show();

    return sample;
}

int main(){

    Test* sample2 = make();;

    sample2->show();

    delete sample2;
}