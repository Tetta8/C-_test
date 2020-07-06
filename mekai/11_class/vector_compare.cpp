#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<int> x;
    vector<int> y;

    cout << "xの要素を入力せよ。" << endl;
    cout << "※終了は9999。" << endl;
    for(int i = 0; ; i++){
        cout << "x[" << i << "] = ";
        int temp;
        cin >> temp;
        if(temp == 9999) break;
        x.push_back(temp);
    }

    cout << "yの要素を入力せよ。" << endl;
    cout << "※終了は9999。" << endl;
    for(int i = 0; ; i++){
        cout << "y[" << i << "] = ";
        int temp;
        cin >> temp;
        if(temp == 9999) break;
        y.push_back(temp);
    }


    cout << boolalpha;
    cout << "x == y : " << (x == y) << endl;
    cout << "x != y : " << (x != y) << endl;
    cout << "x <  y : " << (x <  y) << endl;
    cout << "x <= y : " << (x <= y) << endl;
    cout << "x >  y : " << (x >  y) << endl;
    cout << "x >= y : " << (x >= y) << endl;

    return 0;
}