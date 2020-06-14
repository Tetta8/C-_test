
class Complex{
    double re;      // 実数部
    double im;      // 虚数部

public:
    Complex(double r = 0, double i = 0):re(r), im(i){ }

    double real() const {return re;}
    double imag() const {return im;}

    // 単項+,-演算子
    Complex operator+() const{return *this;}
    Complex operator-() const{return Complex(-re, -im);}

    // 2項+演算子
    friend Complex operator+(const Complex& x, const Complex& y){
        return Complex(x.re + y.re, x.im + y.im);
    }


};