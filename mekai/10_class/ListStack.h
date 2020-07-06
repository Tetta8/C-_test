#ifndef ___Class_ListStack
#define ___Class_ListStack

#include <new>
#include "Stack.h"

template <class Type> class ListStack : public Stack<Type>{
    template <class Type> class Node{
        friend class ListStack<Type>;
        Type* data;
        Node* next;
    public:
        Node(Type* d, Node* n) : data(d), next(n){}
    };

    Node<Type>* top;
    Node<Type>* dummy;

public:
    ListStack(){
        top = dummy = new Node<Type>(NULL, NULL);
    }

    ~ListStack(){
        Node<Type>* ptr = top;
        while(ptr != dummy){
            Node<Type>* next = ptr->next;
            delete ptr->data;
            delete ptr;
            ptr = next;
        }
        delete dummy;
    }

    void push(const Type& x){
        Node<Type>* ptr = top;
        try{
            top = new Node<Type>(new Type(x), ptr);
        }catch(const std::bad_alloc&){
            throw typename Stack<Type>::Overflow();
        }
    }

    Type pop(){
        if(top == dummy)
            throw typename Stack<Type>::Empty();
        else{
            Node<Type>* ptr = top->next;
            Type temp = *(top->data);
            delete top->data;
            delete top;
            top = ptr;
            return temp;
        }
    }
};

#endif