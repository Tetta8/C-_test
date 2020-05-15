#include <stdio.h>
#include <string.h>
#include <string>

void swap(int *a, int *b);
int for_sample(int count);
int argument_const_sample(const int a,const char *ptr);

/* string_sample */
int main(){
    char strl[] = "Helor world.";
    printf("%s\n", strl);
    printf("C:\\shiori.txt\n");
    // printf(R"(C:\shiori.txt\n)"); !! -std=c++11を指定してもできない

    return 0;
}
/* end */

/* argument_const 
int main(){
    int a = 0;
    int b = 2;
    char c = 3;
    char *p_b = &c;

    a = argument_const_sample(b, p_b);

    printf("a = %d\n", a);

}
/* end */

int argument_const_sample(const int a,const char *ptr){
    // a = 3; !!error
    // strcpy(ptr, "dog"); !!error
    return *ptr;
}

/* const_sample 
int main(){
    const int BUFSIZE = 10;
    int b[BUFSIZE] = {32,54,23,45,7789,905,664,12713,834,49};

    for(int i = 0; i <= 9; i++){
        printf("%d:%d\n", i, b[i]);
    }

    return 0;
}
/* end */

/* for_sample 
int main(){
    int a = 0;
    int count = 10;

    a = for_sample(count);

    printf("%d:loop\n", a);

    count = 5;
    a = for_sample(count);

    printf("%d:loop\n", a);


}
/* end */

int for_sample(int count){
    int counta = 0;
    
    for(int i = 0; i <= count; i++){
        counta++;
    };

    return counta;
}

/* swap
int main(){
    int a = 10;
    int b = 20;
    int *p_a = &a;
    int *p_b = &b;

    printf("farst\n");

    printf("%d, %d\n",*p_a, *p_b);
    swap(p_a, p_b);
    printf("%d, %d\n",*p_a, *p_b);

    printf("end\n");

    return 0;

}
*/

void swap(int *a, int *b){
    if(*a == *b){
        printf("abc\n");
        return ;
    }

    int buf = *a;
    *a = *b;
    *b = buf;

    printf("2nd\n");

}