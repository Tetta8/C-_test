#ifndef ___Class_FixedArray
#define ___Class_FixedArray

template <class Type, int N> class FixedArray{
    Type vec[N];

public:
    class IdxRngErr{
        const FixedArray* ident;
        int index;
    public:
        IdxRngErr(const FixedArray* p, int i) : ident(p), index(i){ }
        int Index() const {return index;}
    };

    explicit FixedArray(const Type& v = Type()){
        for(int i = 0; i < N; i++)
            vec[i] = v;
    }

    FixedArray(const FixedArray& x){
        if(&x != this){
            for(int i = 0; i < N; i++)
                vec[i] = x.vec[i];
        }
    }

    int size() const{return N;}

    FixedArray& operator=(const FixedArray& x){
        for(int i = 0; i < N; i++)
            vec[i] = x.vec[i];
        return *this;
    }

    Type& operator[](int i){
        if(i < 0 || i >= N)
            throw IdxRngErr(this, i);
        return vec[i];
    }

    const Type& operator[](int i) const{
        if(i < 0 || i >= N)
            throw IdxRngErr(this, i);
        return vec[i];
    }
};

#endif