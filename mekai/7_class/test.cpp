#include <iostream>

using namespace std;

class Sample{
private:
    int a;
    int b;

public:
    Sample(int a, int b){
        this->a = a;    // 引数のaをメンバデータのaに代入
        this->b = b;    // 引数のaをメンバデータのaに代入
    }

    void disp_data1(int a, int b){

        cout << "【引数がある場合】" << endl;
        cout << "・変数名を指定" << endl;
        cout << "a = " << a << endl;    // 引数のaを出力
        cout << "b = " << b <<endl;     // 引数のbを出力  

        cout << "・thisポインタで指定" << endl;
        cout << "this->a = " << this->a << endl;        // メンバデータのaを出力
        cout << "this->b = " << this->b << endl;        // メンバデータのbを出力
    }

    void disp_data2(){

        cout << "【引数がない場合】" << endl;
        cout << "・変数名を指定" << endl;
        cout << "a = " << a << endl;    // 引数のaを出力
        cout << "b = " << b <<endl;     // 引数のbを出力  

        cout << "・thisポインタで指定" << endl;
        cout << "this->a = " << this->a << endl;        // メンバデータのaを出力
        cout << "this->b = " << this->b << endl;        // メンバデータのbを出力
    }


    void disp_address(){
        cout << "this   のアドレス：" << this << endl;      // オブジェクトのアドレスを出力
    }
};

int main(){
    Sample sample1(1, 2);

    cout << "【アドレスを表示】" << endl;
    cout << "sample1のアドレス：" << &sample1 << endl;  // sample1オブジェクトのアドレスを出力
    sample1.disp_address();

    sample1.disp_data1(10, 20);
    sample1.disp_data2();

 
    return 0;
}