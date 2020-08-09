#include <vector>

template <typename T>
using vector_reference = typename std::vector<T>::referencd;

template <typename T>
vector_reference<T>
at(std::vector<T>& v, std::size_t i){
    return v[i];
}

int main(){
    
}