#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<int> x;

    cout << "整数を入力せよ。" << endl;
    cout << "※終了は9999．" << endl;

    while(true){
        int temp;
        cin >> temp;
        if(temp == 9999) break;
        x.push_back(temp);
    }

    cout << "先頭データは" << x.front() << "です。" << endl;
    cout << "末尾から逆順に1個ずつ取り出して空にします。" << endl;
    while(x.size()){
        cout << x.back() << " ";
        x.pop_back();
    }
    cout << endl;

    return 0;
}