#include <iostream>
#include "Shape.h"

using namespace std;

int main(){
    Shape* a[2];

    a[0] = new Point;
    a[1] = new Rectangle(7, 3);

    for(int i = 0; i < 2; i++){
        cout << "a[" << i << "]" << endl;
        a[i]->draw();
        cout << endl;
    }

    delete a[0];
    delete a[1];

    return 0;
}