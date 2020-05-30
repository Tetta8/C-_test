#include<iostream>
#include "IdNo.h"

using namespace std;

int main(){
    IdNo a;
    IdNo b;
    IdNo c[4];

    cout << "aの識別番号：" << a.id() << endl;
    cout << "bの識別番号：" << b.id() << endl;
    for(int i = 0; i < 4; i++)
        cout << "C[" << i << "]の識別番号：" << c[i].id() << endl;
    cout << "" << IdNo::get_max_id() << endl;
}