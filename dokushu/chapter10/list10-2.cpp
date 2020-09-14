#include <iostream>

void throw_zero(){
    throw 0;
}

int main(){
    try{
        throw_zero();
    }

    catch(float f){
        std::cout << "float型の例外オブジェクトを捕まえました　値 ＝ "
                  << f << std::endl;
    }

    catch(int i){
        std::cout << "int型の例外オブジェクトを捕まえました　値 ＝ "
                  << i << std::endl;
    }

    catch(char c){
        std::cout << "char型の例外オブジェクトを捕まえました　値 ＝ "
                  << static_cast<int>(c) << std::endl;
    }

    catch(int i){
        std::cout << "2番目のint型のcatchで例外オブジェクトを捕まえました　値 ＝ "
                  << i << std::endl;
    }
}