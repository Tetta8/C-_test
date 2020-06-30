#ifndef ___Class_SimpleStack
#define ___Class_SimpleStack

template<class Type> class SimpleStack{
    Type* stk;
    int size;
    int ptr;

    SimpleStack(const SimpleStack<Type>&);
    SimpleStack& operator=(const SimpleStack<Type>&);

public:
    class Overflow{};

    class Empty {};

    explicit SimpleStack(int sz);

    ~SimpleStack();

    Type& push(const Type& x);

    Type pop();
};

#include "SimpleStackImplementation.h"

#endif