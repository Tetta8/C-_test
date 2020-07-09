#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    cout << oct << 1234 << endl;
    cout << dec << 1234 << endl;
    cout << hex << 1234 << endl;
    cout << endl;

    cout << showbase;
    cout << oct << 1234 << endl;
    cout << dec << 1234 << endl;
    cout << hex << 1234 << endl;
    cout << endl;

    cout << setw(10) << internal << "abc" << endl;
    cout << setw(10) << left     << "abc" << endl;
    cout << setw(10) << right    << "abc" << endl;
    cout << endl;

    cout << setbase(10);
    cout << setw(10) << internal << "-123" << endl;
    cout << setw(10) << left     << "-123" << endl;
    cout << setw(10) << right    << "-123" << endl;
    cout << endl;

    cout << setfill('*');
    cout << setw(10) << internal << "-123" << endl;
    cout << setw(10) << left     << "-123" << endl;
    cout << setw(10) << right    << "-123" << endl;
    cout << setfill(' ');
    cout << endl;

    cout << fixed << setw(10) << setprecision(2) << 123.5 << endl;
    cout << scientific << setw(10) << setprecision(2) << 123.5 << endl;
}