#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<int> x;

    cout << "整数を入力せよ。" << endl;
    cout << "※終了は9999。" << endl;

    while(true){
        int temp;
        cin >> temp;
        if(temp == 9999) break;
        x.push_back(temp);
    }

    for(vector<int>::size_type i = 0; i < x.size(); i++)
        cout << "x[" << i << "] = " << x[i] << endl;
}