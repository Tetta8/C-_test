#include <iostream>

namespace A{
    struct S{
        int a;
    };

    void foo(){
        std::cout << "A::foo()" << std::endl;
    }
}

namespace B{
    struct S{
        int b;
    };

    void foo(){
        std::cout << "B::foo()" << std::endl;
    }
}

int main(){
    A::foo();

    B::foo();

    A::S as;
    as.a = 12;

    B::S bs;
    bs.b = 15;

    std::cout << "A::S.a = " << as.a << ", B::S.b = " << bs.b << std::endl;
    // as = bs; // 名前空間が異なるので同じ構造の構造体でも別物として扱われる。

    as.a = bs.b;
    std::cout << "A::S.a = " << as.a << ", B::S.b = " << bs.b << std::endl;
}