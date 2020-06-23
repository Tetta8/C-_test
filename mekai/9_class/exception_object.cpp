#include <string>
#include <iostream>

using namespace std;

class C{
    string name;
public:
    C(const string& n) : name(n){ cout << name << "を構築" << endl;}

    C(const C& c){ name = c.name + "'"; cout << name << "をコポー構築" << endl;}

    ~C(){                               cout << name << "を解体" << endl;}
};

void func(){
    C c1(string("c1"));
    try{
        C c2(string("c2"));
        throw c2;
    }catch (int){
        cout << "int型例外を補足" << endl;
    }
    cout << "tryブロック終了" << endl;
}

int main(){
    try{
        func();
    }catch(const C& c){
        cout << "C型例外を補足" << endl;
    }
}