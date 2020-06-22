#ifndef ___Class_Rectangle
#define ___Class_Rectangle

#include <string>
#include <sstream>
#include <iostream>
#include "Shape.h"
#include "TwoDimensional.h"

class Rectangle : public Shape, public TwoDimensional{
    int width;
    int height;
public:
    Rectangle(int w, int h) : width(w), height(h){}

    Rectangle* clone() const{
        return new Rectangle(width, height);
    }

    void draw() const{
        for(int i = 0; i <= height; i++){
            for(int j = 0; j <= width; j++){
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    }

    std::string to_string() const{
        std::ostringstream os;
        os << "Rectangle(width:" << width << ", height:" << height << ")";
        return os.str();
    }

    void debug() const{
        Shape::debug();
        std::cout << "width  :" << width  << std::endl;
        std::cout << "height :" << height << std::endl;
    }

    double get_area() const{
        return width * height;
    }
};

#endif