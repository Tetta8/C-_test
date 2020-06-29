#include <new>
#include <iomanip>
#include <iostream>
#include "FixedArray.h"

using namespace std;

template <class Type, int N>
void print_fixedArray(const FixedArray<Type, N>& a){
    cout << "{";
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << "}";
}

int main(){
    FixedArray<int, 7> a1;
    for(int i = 0; i < a1.size(); i++)
        a1[i] = i;

    FixedArray<int, 7> a2 = a1;

    cout << "a1 = "; print_fixedArray(a1); cout << endl;
    cout << "a2 = "; print_fixedArray(a2); cout << endl;
    
    return 0;
}