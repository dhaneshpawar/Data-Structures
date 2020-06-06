#include<stdio.h>
// void printme();
// extern void printme();
// extern printme2();

// void printme(){
//     int y =10;
//     printf("\n i is %d \n",i);
//     i++;
// }

int main(void){
    extern int y;
    // printme();
    printf("\n i is %d \n",y);
    // printme2();
    return 0;
}
int y = 5;

// void printme2(){
//     i++;
//     printf("\n i is %d \n",i);
// }
