#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ifstream fis("HELLO");

    if(!fis)
        cerr << "\aファイル\"HERRO\"をオープンできません。" << endl;
    else{
        while(true){
            string text;
            getline(fis, text);
            if(!fis) break;
            cout << text << endl;
        }
    }
}