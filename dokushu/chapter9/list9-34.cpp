// main関数が無いのでオブジェクト生成までのコンパイルとすること

#include <type_traits>

template <typename T>
class vector2d{
    static_assert(std::is_signed<T>::value, "Tは符号を扱える数値型である必要があります。");
};

vector2d<float> vf;
vector2d<int> vi;
vector2d<unsigned int> vu;