#include <stdio.h>

void call_c(void){
    puts("call_c");
}

void call_cpp(void);

int main(void){
    call_cpp();
}