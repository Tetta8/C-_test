#include <iostream>

using namespace std;

class Buf{
    int a[5];
protected:
    int element(int i) const {return a[i];}
    int& element(int i) {return a[i];}
};

class InBuf : virtual public Buf{
public:
    int get(int i) const{return element(i);}
};

class OutBuf : virtual public Buf{
public:
    void put(int i, int v){element(i) = v;}
};

class IOBuf : public InBuf, public OutBuf{

};

int main(){
    IOBuf a;

    for(int i = 0; i < 5; i++){
        a.put(i, i * 10);
    }

    for(int i = 0; i < 5; i++){
        cout << a.get(i) << " ";
    }
    cout << endl;

    IOBuf b;

    for(int i = 0; i < 5; i++){
        b.put(i, i * 100);
    }

    for(int i = 0; i < 5; i++){
        cout << b.get(i) << " ";
    }
    cout << endl;

    for(int i = 0; i < 5; i++){
        cout << a.get(i) << " ";
    }
    cout << endl;

}