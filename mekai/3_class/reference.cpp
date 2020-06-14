#include <iostream>

using namespace std;

int main(){
    double d = 1.0;
    const int& p = 5;
    const int& q = d;

    cout << "q = " << q << endl;

    const_cast<int&>(q) = 3.14;

    cout << "d = " << d << endl;
    cout << "p = " << p << endl;
    cout << "q = " << q << endl;

    return 0;
}