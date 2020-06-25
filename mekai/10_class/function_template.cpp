#include <cstring>
#include <iostream>

using namespace std;
template <class Type> Type maxof(Type a, Type b){
    return a > b ? a : b;
}

template <> const char* maxof<const char*>(const char* a, const char* b){
    return strcmp(a, b) > 0 ? a : b;
}

int main(){
    int a, b;
    double x, y;
    char s[64], t[64];

    cout << "整数aとb：";   cin >> a >> b;
    cout << "実数xとy：";   cin >> x >> y;
    cout << "文字列sとt："; cin >> s >> t;

    cout << "aとbで大きいのは"       << maxof(a, b)                  << "です。" << endl;
    cout << "xとyで大きいのは"       << maxof(x, y)                  << "です。" << endl;
    cout << "aとxで大きいのは"       << maxof<double>(a, x)          << "です。" << endl;
    cout << "sとtで大きいのは"       << maxof<const char*>(s, t)     << "です。" << endl;
    cout << "aと\"ABC\"で大きいのは" << maxof<const char*>(s, "ABC") << "です。" << endl;

    return 0;
}