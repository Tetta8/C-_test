#include <string>
#include <typeinfo>
#include <iostream>

using namespace std;

int main(){
    cout << "typeid(string).name() = " << typeid(string).name() << endl << endl;
    cout << "typeid(wstring).name() = " << typeid(wstring).name() << endl;

    return 0;
}