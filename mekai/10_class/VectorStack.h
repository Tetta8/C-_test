#ifndef ___Class_VectorStack
#define ___Class_VectorStack

#include "Stack.h"
#include <vector>

template <class Type> class VectorStack : public Stack<Type>{
    std::vector<Type> stk;

public:
    VectorStack(){}

    ~VectorStack(){}

    void push(const Type& x){
        try{
            stk.push_back(x);
        }
        catch(...){
            throw Stack<void>::Overflow();
        }
    }

    Type pop(){
        if(stk.empty())
            throw Stack<void>::Empty();
        Type x = stk.back();
        stk.pop_back();
        return x;
    }
};

#endif