#include <iostream>

using namespace std;

class V1{
public:
    V1(){cout << "V1を構築" << endl;}
    ~V1(){cout << "V1を解体" << endl;}
};

class V2{
public:
    V2(){cout << "V2を構築" << endl;}
    ~V2(){cout << "V2を解体" << endl;}
};

class X : virtual public V1, virtual public V2{
public:
    X(){cout << "Xを構築" << endl;}
    ~X(){cout << "Xを解体" << endl;}
};

class Y : virtual public V2, virtual public V1{
public:
    Y(){cout << "Yを構築" << endl;}
    ~Y(){cout << "Yを解体" << endl;}
};

class Z : public X, public Y{
public:
    Z(){cout << "Zを構築" << endl;}
    ~Z(){cout << "Zを解体" << endl;}
};

int main(){
    Z dummy;
    cout << "-------------" << endl;
}