#include <iostream>
#include "Array.h"
#include "BoolARray.h"

using namespace std;

void print_Array_bool(const Array<bool>& a){
    for(int i = 0; i < a.size(); i++)
        cout << (a[i] ? '1' : '0');
}

int main(){
    Array<bool> x(15);

    cout << boolalpha;

    for(int i = 0; i < x.size(); i++)
        cout << "x[" << i << "] = " << x[i] << endl;

    Array<bool> y(x);
    Array<bool> z(5);

    z = y;

    y[3] = y[6] = true;
    z[5] = z[12] = true;

    cout << "x = "; print_Array_bool(x); cout << endl;
    cout << "y = "; print_Array_bool(y); cout << endl;
    cout << "z = "; print_Array_bool(z); cout << endl;

    return 0;
}