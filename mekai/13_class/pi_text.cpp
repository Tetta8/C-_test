#include <iomanip>
#include <fstream>
#include <iostream>

using namespace std;

int main(){
    double pi = 3.14159265300000000000000000000000000000000000000000;

    ofstream fos("pi.txt");
    if(!fos)
        cout << "\aファイルをオープンできません。";
    else{
        fos << pi;
        fos.close();
    }

    ifstream fis("pi.txt");
    if(!fis)
        cout << "\aファイルをオープンできません。" << endl;
    else{
        fis >> pi;
        cout << "piの値は" << fixed << setprecision(20) << pi << "です。" << endl;
        fis.close();
    }
}