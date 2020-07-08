#include <string>
#include <iostream>

using namespace std;

int main(){
    string s0;
    string s1("ABCDEFGHIJK");
    string s2("ABCDEFGHIJK", 5);
    string s3(7, '*');
    string s4(s1);
    string s5(s1, 5, 3);
    
    cout << "s0 = " << s0 << endl;
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "s3 = " << s3 << endl;
    cout << "s4 = " << s4 << endl;
    cout << "s5 = " << s5 << endl;
}