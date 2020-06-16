#include <iostream>

using namespace std;

class Base{
    int x;
public:
    Base() : x(99){cout << "Base::xを99で初期化" << endl;}

    int get_x() const {return x;}
};

class Derived : public Base{
    // コンストラクタを含めて何も定義しない
};

int main(){
    Derived d;
    cout << "d.get_x() = " << d.get_x() << endl;
}