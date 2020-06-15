#include <iostream>

using namespace std;

class ErrorOverFlow{};

bool check_0_100(int x){
    if(x < 0)
        throw "負の数が入力されました。";
    else if(x > 100)
        throw ErrorOverFlow();
    else
        return true;
}

int main(){
    int num;
    cout << "0~100の整数を入力してください：";
    cin >> num;

    try{
        if(check_0_100(num)){
            cout << "正常動作" << endl;
            cout << "範囲内です。" << endl;
        }
    }

    catch(ErrorOverFlow){
        cout << "オブジェクトのキャッチ" << endl;
        cout << "100より大きな数値が入力されました。" << endl;
    }
    
    catch(const char* str){
        cout << "文字列のキャッチ" << endl;
        cout << str << endl;
    }


}