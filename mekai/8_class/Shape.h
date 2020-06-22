#ifndef ___Class_Shape
#define ___Class_Shape

#include <string>
#include <iostream>

class Shape{
public:
    virtual ~Shape() = 0;
    virtual Shape* clone() const = 0;
    virtual void draw() const = 0;
    virtual std::string to_string() const = 0;

    void print() const {
        std::cout << to_string() << std::endl;
        draw();
    }

    virtual void debug() const = 0;
}

inline Shape::~Shape(){}

inline void Shape::debug() const{
    std::cout << "-- デバッグ情報 --" << std::endl;
    std::cout << "型：" << typeid(*this).name() << std::endl;
    std::cout << "アドレス：" << this << std::endl;
}

inline std::ostream& operator<<(std::ostream&, const Shape& s){
    return os << s.to_string();
}

#endif