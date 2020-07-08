#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ofstream fos("HELLO", ios_base::app);

    if(!fos)
        cerr << "\aファイル\"HELLO\"をオープンできません。" << endl;
    else{
        fos << "Fine, thanks." << endl;
        fos << "And you?" << endl;
    }
}