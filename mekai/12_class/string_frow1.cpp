#include <string>
#include <iostream>

using namespace std;

void pad_char(string &s, char ch, string::size_type width){
    if(width > s.length())
        s.append(width - s.length(), ch);
}

int main(){
    int width;
    char ch;
    string s1, s2, s3;

    cout << "指定長になるまで文字列の後ろに文字を埋めつくします。" << endl;
    cout << "文字列s1 ＝ "; cin >> s1;
    cout << "文字列s2 ＝ "; cin >> s2;
    cout << "文字列s3 ＝ "; cin >> s3;
    cout << "指定長   ＝ "; cin >> width;
    cout << "文字     ＝ "; cin >> ch;

    pad_char(s1, ch, width);
    pad_char(s2, ch, width);
    pad_char(s3, ch, width);

    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "s3 = " << s3 << endl;
}