#include <iostream>
using namespace std;

int main(){
    int value =  42;
    cout << "valueのアドレスは" << &value << "で、値は" << value << "です。" << endl;

    int& reference = value;
    cout << "referenceのアドレスは" << &reference << "で、値は" << reference << "です。" << endl;

    reference = 0;
    cout << "valueのアドレスは" << &value << "で、値は" << value << "です。" << endl;
}