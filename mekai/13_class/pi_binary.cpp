#include <iomanip>
#include <fstream>
#include <iostream>

using namespace std;

int main(){
    double pi = 3.141592653000000000000000000000000000000;

    ofstream fos("pi.bin", ios_base::binary);
    if(!fos)
        cout << "\aファイルをオープンできません。";
    else{
        fos.write(reinterpret_cast<char*>(&pi), sizeof(double));
        fos.close();
    }

    ifstream fis("pi.bin", ios_base::binary);
    if(!fis)
        cout << "\aファイルをオープンできません。" << endl;
    else {
        fis.read(reinterpret_cast<char*>(&pi), sizeof(double));
        cout << "piの値は" << fixed << setprecision(20) << pi << "です。" << endl;
        fis.close();
    }
}