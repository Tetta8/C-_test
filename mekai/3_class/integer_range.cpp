#include<limits>
#include<iostream>

using namespace std;

int main(){
    cout << "この処理系の整数型で表現できる値" << endl;
    cout << "char :"
         << int(numeric_limits<char>::min()) << "～"
         << int(numeric_limits<char>::max()) << endl;

    cout << "signed char :"
         << int(numeric_limits<signed char>::min()) << "～"
         << int(numeric_limits<signed char>::max()) << endl;

    cout << "unsigned char :"
         << int(numeric_limits<unsigned char>::min()) << "～"
         << int(numeric_limits<unsigned char>::max()) << endl;
    
    cout << "short int :"
         << int(numeric_limits<short int>::min()) << "～"
         << int(numeric_limits<short int>::max()) << endl;

    cout << "int :"
         << int(numeric_limits<int>::min()) << "～"
         << int(numeric_limits<int>::max()) << endl;

    cout << "long int :"
         << int(numeric_limits<long int>::min()) << "～"
         << int(numeric_limits<long int>::max()) << endl;

    cout << "unsigned short int :"
         << int(numeric_limits<unsigned short int>::min()) << "～"
         << int(numeric_limits<unsigned short int>::max()) << endl;

    cout << "unsigned int :"
         << int(numeric_limits<unsigned int>::min()) << "～"
         << int(numeric_limits<unsigned int>::max()) << endl;

    cout << "unsigned long int :"
         << int(numeric_limits<unsigned long int>::min()) << "～"
         << int(numeric_limits<unsigned long int>::max()) << endl;

    cout << "この処理系の単なる文字列型は" << endl
         << (numeric_limits<char>::is_signed ? "符号付き" : "符号無し")
         << "文字列型です。" << endl;

    cout << "この処理系のdouble型の特性は" << endl;
    cout << "最小値" << numeric_limits<double>::min() << endl;
    cout << "最大値" << numeric_limits<double>::max() << endl;
    cout << "仮数部" << numeric_limits<double>::radix << "進数で"
                    << numeric_limits<double>::digits << "桁" << endl;
    cout << "桁数" << numeric_limits<double>::digits10 << endl;
    cout << "機会ε" << numeric_limits<double>::epsilon() << endl;
    cout << "最大の丸め誤差" << numeric_limits<double>::round_error() << endl;
    cout << "丸め様式：";
    switch (numeric_limits<double>::round_style){
        case round_indeterminate:
            cout << "決定できない。" << endl;
            break;
        case round_toward_zero:
            cout << "ゼロに向かって丸める。" << endl;
            break;
        case round_to_nearest:
            cout << "表現可能な最も近い値に丸める。" << endl;
            break;
        case round_toward_infinity:
            cout << "無限大に向かって丸める。" << endl;
            break;
        case round_toward_neg_infinity:
            cout << "負の無限大に向かって丸める。" << endl;
            break;        
    }
}