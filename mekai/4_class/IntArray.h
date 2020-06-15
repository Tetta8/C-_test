#ifndef ___Class_IntArray
#define ___Class_IntArray

class IntArray{
    int nelem;
    int* vec;

public:
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
    int& operator[](int i){return vec[i];}
    const int& operator[](int i) const {return vec[i];}
    
};

#endif