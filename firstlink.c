#include<stdio.h>

int A=10;     // global variable

extern int B;   //secondlink.c file madhun int extern through ghetala
int main()
{


    printf("value of A is:%d\n",A);
    printf("value of b from secondlink file is : %d\n",B);

    return 0;

}