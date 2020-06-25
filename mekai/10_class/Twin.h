#ifndef ___Class_Twin
#define ___Class_Twin

#include <iostream>
#include <utility>      // 新swap用
#include <algorithm>    // 旧swap用

template <class Type> class Twin{
    Type v1;
    Type v2;
public:
    Twin(const Type& f = Type(), const Type& s = Type()):v1(f), v2(s){}

    Twin(const Twin<Type>& t) : v1(t.first()), v2(t.second()){}

    Type  first()  const {return v1;}
    Type& first()        {return v1;}

    Type  second() const {return v2;}
    Type& second()       {return v2;}

    void set(const Type& f, const Type& s){v1 = f; v2 = s;}

    Type min() const{ return v1 < v2  ? v1 : v2;}

    bool ascending() const {return v1 < v2;}

    void sort() {if(!(v1 < v2)) std::swap(v1, v2);}
};

template <class Type> inline std::ostream& operator<<(std::ostream& os, const Twin<Type>& t){
    return os << "[" << t.first() << "," << t.second() << "]";
}

#endif