#include <iostream>

class A{
    int v;

public:
    void set(int value);
    int get();
    int get() const;
};

void A::set(int value){
    v = value;
}

int A::get(){
    std::cout << "not const" << std::endl;
    return v;
}

int A::get() const{
    std::cout << "const" << std::endl;
    return v;
}

int main(){
    A a;
    a.set(42);
    a.get();

    const A& ca = a;
    ca.get();
}

// mutableをメンバ変数宣言時に付けるとconst関数でも書き換え可能になるが、
// よほど重要な処理でない限り、使うべきではない。
// constの意味がなくなってしまい、バグにつながるミスを生み出す。