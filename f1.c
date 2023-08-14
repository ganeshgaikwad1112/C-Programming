#include<stdio.h>

extern int Add();

int main()
{
    int i = 5;
    int j = 10;
    int Ans = 0;

    Ans = Add(i , j);

    printf("Addition of two number is %d\n", Ans);



    return 0;
}