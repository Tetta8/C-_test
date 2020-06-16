#include "Super.h"

class Sub : protected Super{
    void f(){
        // pri = 1;
        pro = 1;
        pub = 1;
    }
};

int main(){
    Super s;
    Sub x;

    // s.pri = 1;
    // s.pro = 1;
    s.pub = 1;

    // x.pri = 1;
    // x.pro = 1;
    // x.pub = 1;
}