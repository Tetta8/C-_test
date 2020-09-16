#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){
    const char* strA = "Hello, ";
    const char* strB = "world.";

    char* strC = (char*)malloc(strlen(strA) + strlen(strB) + 1);

    strcpy(strC, strA);
    strcat(strC, strB);
    puts(strC);

    if(strcmp(strC, "Hello, world.") == 0){
        puts("oks");
    }
    free(strC);
}