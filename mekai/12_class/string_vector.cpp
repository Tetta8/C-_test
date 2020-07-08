#include <string>
#include <vector>
#include <iostream>

using namespace std;

template <class Allocaotor>
void put_string_vector(const vector<string, Allocaotor>& v){
    cout << "{ ";
    for(typename vector<string, Allocaotor>::size_type i = 0; i < v.size(); i++){
        cout << '"';
        for(typename vector<string, Allocaotor>::size_type j = 0; j < v[i].length(); j++)
            cout << v[i][j];
        cout << "\" ";
    }
    cout << "} ";
}

int main(){
    vector<string> s1(3);
    vector<string> s2;
    s2.push_back("ABC");
    s2.push_back("123");
    s2.push_back("XYZ");

    cout << "s1 = ";
    put_string_vector(s1);
    cout << endl;

    cout << "s2 = ";
    put_string_vector(s2);
    cout << endl;
}