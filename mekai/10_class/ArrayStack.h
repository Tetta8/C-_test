#ifndef ___Class_ArrayStack
#define ___Class_ArrayStack

#include "Stack.h"

template <class Type> class ArrayStack : public Stack<Type>{
    static const int size = 10;
    int ptr;
    Type stk[size];

public:
    ArrayStack() : ptr(0){}

    ~ArrayStack() {}

    void push(const Type& x){
        if(ptr >= size)
            throw typename Stack<Type>::Overflow();
        stk[ptr++] = x;
    }

    Type pop(){
        if(ptr <= 0)
            throw typename Stack<Type>::Empty();
        return stk[--ptr];
    }
};

#endif