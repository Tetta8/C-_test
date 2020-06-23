#include <iostream>
#include "Shape.h"
#include "TwoDimensional.h"
#include "Rectangle.h"
#include "RectEquilTriangle.h"

using namespace std;

int main(){
    TwoDimensional* t[] = {
        new Rectangle(7, 3),
        new RectEquilTriangleLB(5),
        new RectEquilTriangleRU(4),
    };

    for(int i = 0; i < sizeof(t) / sizeof(t[0]); i++){
        cout << "t[" << i << "]の面積は" << t[i]->get_area() << "です。" << endl;

        if(Shape* s = dynamic_cast<Shape*>(t[i]))
            s->draw();
        cout << endl;
    }

    for(int i = 0; i < sizeof(t) / sizeof(t[0]); i ++)
        delete t[i];

    return 0;
}