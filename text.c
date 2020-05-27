// gcc -Wall -o program text.c
#include<stdio.h>
int main(){
    int i;
    float b;
    i = 3;
    b = 30;
    char ch[] = "hello world";
    printf("\n Hello world = %d %f \n",i,b);
    printf("\n Hello world = %s \n",ch);
    return 0;
}