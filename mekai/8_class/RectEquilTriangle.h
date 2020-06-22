#ifndef ___Class_RecEquilTriangle
#define ___Class_RecEquiltriangle

#include <string>
#include <sstream>
#include <iostream>
#include "Shape.h"
#include "TwoDimensional.h"

class RectEquilTriangle : public Shape, public TwoDimensional{
protected:
    int length;

public:
    RectEquilTriangle(int len) : length(len){}

    double get_area() const{
        return length * length / 2.0;
    }
};


class RectEquilTriangleLB : public RectEquilTriangle{
public:
    RectEquilTriangleLB(int len) : RectEquilTriangle(len){}

    RectEquilTriangleLB* clone() const{
        return new RectEquilTriangleLB(length);
    }

    void draw() const {
        for(int i = 1; i <= length; i++){
            for(int j = 1; j <= i; j++){
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    }

    std::string to_string() const{
        std::ostringstream os;
        os << "RectEwuitTriangleLB(length:" << length << ")";
        return os.str();
    }

    void debug() const{
        Shape::debug();
        std::cout << "クラス：RectEquilTriangleLB" << std::endl;
        std::cout << "アドレス" << this << std::endl;
        std::cout << "length:" << length << std::endl;
    }
};

class RectEquilTriangleRU : public RectEquilTriangle{
public:
    RectEquilTriangleRU(int len) : RectEquilTriangle(len){}

    RectEquilTriangleRU* clone() const{
        return new RectEquilTriangleRU(length);
    }

    void draw() const{
        for(int i = 1; i <= length; i++){
            for(int j = 1; j <= i -1; j++){
                std::cout << " ";
            }
            for(int j = 1; j <= length - i + 1; j++){
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    }

    std::string to_string() const{
        std::ostringstream os;
        os << "RectEquilTriangleRU(length:" << length << ")";
        return os.str();
    }

    void debug() const{
        Shape::debug();
        std::cout << "クラス：RectEquilTriangleRU" << std::endl;
        std::cout << "アドレス" << this << std::endl;
        std::cout << "length:" << length << std::endl;
    }
};

#endif