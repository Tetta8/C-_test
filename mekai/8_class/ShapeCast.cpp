#include <iostream>
#include "Shape.h"
#include "TwoDimensional.h"
#include "Point.h"
#include "Line.h"
#include "Rectangle.h"
#include "RectEquilTriangle.h"

using namespace std;

int main(){
    Shape* s[] = {
        new Point(),
        new HorzLine(6),
        new VertLine(9),
        new Rectangle(7, 3),
        new RectEquilTriangleLB(5),
        new RectEquilTriangleRU(4),
    };

    for(int i = 0; i < sizeof(s) / sizeof(s[0]); i++){
        cout << "s[" << i << "]" << endl;
        s[i]->print();

        if(TwoDimensional* t = dynamic_cast<TwoDimensional*>(s[i]))
            cout << "面積は" << t->get_area() << "です。" << endl;
            cout << endl;
    }

    for(int i = 0; i < sizeof(s) / sizeof(s[0]); i++)
        delete s[i];

    return 0;
}