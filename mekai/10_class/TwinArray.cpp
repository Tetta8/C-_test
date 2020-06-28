#include <new>
#include <iostream>
#include "Twin.h"
#include "Array.h"

using namespace std;

int main(){
    Array<Twin<int> > x(3);
    Array<Twin<int> > y = x;
    y[1] = Twin<int>(4, 5);

    Array<Twin<int>> z(2);
    z = y;

    cout << "---- x ----" << endl;
    for(int i = 0; i < x.size(); i++)
        cout << "x[" << i << "] = " << x[i] << endl;

    cout << "---- y ----" << endl;
    for(int i = 0; i < x.size(); i++)
        cout << "y[" << i << "] = " << y[i] << endl;
 
    cout << "---- z ----" << endl;
    for(int i = 0; i < x.size(); i++)
        cout << "z[" << i << "] = " << z[i] << endl;

    return 0;
}