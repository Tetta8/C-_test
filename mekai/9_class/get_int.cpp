#include <cctype>
#include <string>
#include <iostream>

using namespace std;

class FormatError {};
class ValueError {};

int string_to_int(const string& str){
    int i = 0;
    int no = 0;
    int sign = 1;
    while(isspace(str[i]))
        i++;

    switch(str[i]){
        case '+' : i++;             break;
        case '-' : i++; sign = -1;  break;
    }
    while(i < str.length()){
        if(!isdigit(str[i]))
            throw FormatError();
        no = no * 10 + (str[i] - '0');
        i++;
    }
    return no *= sign;
}

int get_int(){
    int no = 0;
    string temp;
    try{
        cin >> temp;
        no = string_to_int(temp);
        return no;
    } catch(FormatError&){
        cout << "数字以外の文字が入力されました。" << endl;
        throw;
    }
}

int get_int_bound(int low, int high){
    int no = low;
    try{
        no = get_int();
        if(no < low || no > high)
            throw ValueError();
        return no;
    }catch(ValueError&){
        cout << "不正な値が入力されました。" << endl;
        throw;
    }
}

int main(){
    try{
        cout << "aの値：";              int a = get_int();
        cout << "bのatai(10～99)：";    int b = get_int_bound(10, 99);
        cout << "a + bは" << a + b << "です。" << endl;
    } catch(...){
        cout << "入力エラー発生！！" << endl;
    }
}