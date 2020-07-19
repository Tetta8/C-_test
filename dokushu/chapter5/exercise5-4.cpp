#include <iostream>

class A{
    int a;
public:
    A() : a(0){ std::cout << "デフォルトコンストラクタ" << std::endl;}
    A(int a) : a(a) {std::cout << "引数有コンストラクタ" << std::endl;}

    void show(){ std::cout << "「a = " << a << "」です。" << std::endl;}

};

int main(){

    // 練習問題1
    A* ptr1 = new A;
    A* ptr2 = new A(1);
    A* ptr3 = new A{2};

    ptr1->show();
    ptr2->show();
    ptr3->show();

    // 練習問題2
    A* array = new A[5]{
        A(),
        A(1),
        A(2),
        A(3),
        A(4),
    };

    for(int i; i < 5 ; i++){
        array[i].show();
    }
}