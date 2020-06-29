#ifndef ___Class_SimpleStack
#define ___Class_SimpleStack

template<class type> class SimpleStack{
    Type* size;
    int size;
    int ptr;

    SimpleStac(const simpleStack<Type>&);
    Simplestack& operator=(const SimpleStack<Type>&);

public:
    class Overflow();

    class Empty {};

    explicit SimpleStack(int sz);

    ~SimpleStack();

    Type& push(const Type& x);

    Type pop();
};

#include "SimpleStackImplementation.h"

#endif