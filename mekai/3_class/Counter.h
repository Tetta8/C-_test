#ifndef ___Class_Counter
#define ___Class_Counter

#include<limits>

class Counter{
    unsigned cnt;

public:
    Counter():cnt(0) { }

    void increment() {if (cnt < std::numeric_limits<unsigned>::max()) cnt++;}
    void decrement() {if (cnt > 0) cnt--;}
    unsigned value() {return cnt;}
};

#endif