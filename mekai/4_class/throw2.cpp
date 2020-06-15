#include <new>
#include <iostream>

using namespace std;

class OverFlow{};

int f(int x){
    if(x < 0)
        throw "error";
    else if(x > 30000)
        throw OverFlow();
    else
        return x * 2;
}

int main(){
    int a;
    cout << "整数：";
    cin >> a;

    try{
        int b = f(a);
        cout << "その数の2倍は" << b << "です。" << endl;
    }

    catch (const char* str){
        cout << "例外発生：" << str;
    }

    catch (OverFlow){
        cout << "オーバーフローしました。プログラムを終了します。" << endl;
        return 1;
    }
    
}