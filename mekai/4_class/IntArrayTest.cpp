#include <iomanip>
#include <iostream>
#include "IntArray.h"

using namespace std;

int main(){
    int n;
    cout << "要素数を入力せよ：";
    cin >> n;

    IntArray a(n);

    for(int i = 0; i < a.size(); i++)
        a[i] = i;
    
    IntArray b(128);
    IntArray c(256);

    cout << "bとcの要素数は" << b.size() << "と" << c.size();
    c = b = a;
    cout << "から" << b.size() << "と" << c.size() << "に変わりました。" << endl;

    IntArray d = b;

    cout << "    a    b    c    d" << endl;
    cout << "--------------------" << endl;

    for(int i = 0; i < n; i++){
        cout << setw(5) << a[i] << setw(5) << b[i]
             << setw(5) << c[i] << setw(5) << d[i] << endl;
    }



    return 0;
}