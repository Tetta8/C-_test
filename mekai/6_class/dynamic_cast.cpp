#include <iostream>
#include <typeinfo>

using namespace std;

class Base{
    virtual void f(){};
};

class Derived : public Base{};

int main(){
    Base bs;
    Derived dv;

    Derived* p1 = dynamic_cast<Derived*>(&bs);
    cout << "p1 = " << p1 << endl;

    Derived* p2 = dynamic_cast<Derived*>(&dv);
    cout << "p2 = " << p2 << endl;

    try {
        Derived& r1 = dynamic_cast<Derived&>(bs);
        cout << "r1はbsを参照しています。" << endl;
    } catch(bad_cast){
        cout << "bsのキャストに失敗しました。" << endl;
    }

    try {
        Derived& r2 = dynamic_cast<Derived&>(dv);
        cout << "r2はdvを参照しています・" << endl;
    } catch (bad_cast){
        cout << "dvのキャストに失敗しました。";
    }
}