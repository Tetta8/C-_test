#include <string>
#include <cstring>
#include <iostream>

using namespace std;

int main(){
    char cst[100];
    string str;

    cout << "文字列を入力せよ：";
    cin >> str;

    strcpy(cst, str.c_str());

    cout << "cst = " << cst << endl;
    cout << "str = " << str << endl;
}