// main関数が無いのでオブジェクト生成までのコンパイルで行うこと

template <typename... T>
void function(T&&... args);

template <typename... T>
void foo(T... args){
    function<T...>(args...);
}
