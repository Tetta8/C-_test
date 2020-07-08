#include <string>
#include <fstream>
#include <iostream>

using namespace std;

bool file_exist(const char* filename){
    ifstream fis(filename);
    return fis.is_open();
}

int main(){
    string file_name;
    cout << "存在を確認したファイルの名前：";
    cin >> file_name;

    cout << "そのファイルは存在"
         << (file_exist(file_name.c_str()) ? "します。" : "しません。") << endl;
}