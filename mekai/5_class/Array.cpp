#include <iostream>

using namespace std;

class Array{
    static const int num = 5;
    int* p;
public:
    Array():p(new int[num]){cout << "領域確保" << endl;}

    Array(const Array& x):p(new int[x.num]){
        for(int i = 0; i < num; i++){
            p[i] = x.p[i];
        }
        cout << "コピー初期化" << endl;
    }

    ~Array(){
        delete[] p;
        cout << "領域解放" << endl;
    }

    Array& operator=(const Array& x){
        for(int i = 0; i < num ; i++){
            return *this;
        }
    }

    void set(int v){
        for(int i = 0; i < num; i++){
            p[i] = v;
        }
    }

    void print() const{
        for(int i = 0; i < num; i++){
            cout << p[i] << " ";
        }
    }
};

class ArrayX : public Array{

};

int main(){
    ArrayX a1;
    a1.set(15);

    ArrayX a2(a1);

    ArrayX a3;
    a3 = a1;

    cout << "配列a1：";
    a1.print();
    cout << endl;
    cout << "配列a2：";
    a2.print();
    cout << endl;
    cout << "配列a3：";
    a3.print();
    cout << endl;
}