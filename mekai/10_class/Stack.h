#ifndef ___Class_Stack
#define ___Class_Stack

template<class Type> class Stack{
public:
    class Overflow{};

    class Empty{};

    virtual ~Stack() = 0;

    virtual void push(const Type&) = 0;

    virtual Type pop() = 0;
};

template <class Type> Stack<Type>::~Stack(){}

#endif