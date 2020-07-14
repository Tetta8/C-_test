#include <iostream>

union Base_u{
    int a;
    int b;
    float c;
};

// union Dev_u : Base_u{ // 共用体は派生で作成できない
// };

class A : Base_u{

};

int main(){
    return 0;
}