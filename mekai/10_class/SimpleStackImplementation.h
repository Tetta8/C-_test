#ifndef ___Class_SimpleStackImplementation
#define ___Class_SimpleStackImplementation

template<class Type>
SimpleStack<Type>::SimpleStack(int sz): size(sz), ptr(0){
    stk = new Type[size];
}

template<class Type>
SimpleStack<Type>::~SimpleStack(){
    delete[] stk;
}

template<class Type>
Type& SimpleStack<Type>::push(const Type& x){
    if(ptr >= size)
        throw Overflow();
    return stk[ptr++] = x;
}

template<class Type>
Type SimpleStack<Type>::pop(){
    if(ptr <= 0)
        throw Empty();
    return stk[--ptr];
}

#endif