#include <iostream>
#include <string>

class A{
    int m_v;
    std::string m_n;

public:
    A(int , std::string);
    A(float);

    void show(){
        std::cout << "m_v = " << m_v << ", m_n = " << m_n << std::endl;
    }
};

A::A(int v, std::string n) : m_v(v), m_n{n}{} // ①

A::A(float) : A{-1, "float"} {} // ②

int main(){
    A ap(42, "0"); // ③
    A ab{42, "0"}; // ④

    A bp = A(42, "0"); // ⑤
    A bb = A{42, "0"}; // ⑥

    // A cp = (42, "0"); // ⑦ ()はイコールでは使えない
    A cb = {42, "0"}; // ⑧

    A dp = (42, 0.0); // ⑨
    // A db = {42, 0.0};  // ⑩{}はイコールでは使えない

    double pi = 3.1415926536;
    A ep(pi); // ⑪
    A eb{pi}; // ⑫

    std::cout << "ap: ";
    ap.show();
    std::cout << "ab: ";
    ab.show();
    std::cout << "bp: ";
    bp.show();
    std::cout << "bp: ";
    bb.show();
    std::cout << "cb: ";
    cb.show();
    std::cout << "dp: ";
    dp.show();
    std::cout << "ep: ";
    ep.show();
    std::cout << "eb: ";
    eb.show();

}