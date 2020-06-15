#ifndef ___Class_IntArray
#define ___Class_IntArray

class IntArray{
    int nelem;
    int* vec;

public:
    // 添え字範囲エラー
    class IdxRngErr{
    private:
        const IntArray* ident;
        int idx;
    public:
        IdxRngErr(const IntArray* p, int i): ident(p), idx(i){}
        int index() const {return idx;}
    };


    // 明示的コンストラクタ
    explicit IntArray(int size): nelem(size){vec = new int[nelem];}

    // コピーコンストラクタ
    IntArray(const IntArray& x);

    // デストラクタ
     ~IntArray(){delete[] vec;}

    // getter
    int size() const{return nelem;}

    // 演算子
    IntArray& operator=(const IntArray& x);
    int& operator[](int i){
        if(i < 0 || i >= nelem)
            throw IdxRngErr(this, i);
        return vec[i];
    }
    const int& operator[](int i) const {
        if(i < 0 || i >= nelem)
            throw IdxRngErr(this, i);
        return vec[i];
    }
    
};

#endif