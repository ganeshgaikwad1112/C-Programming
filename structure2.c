#include<stdio.h>

#pragma pack(1)     // actual memory milate,=summation of structure.

struct Demo
{
    int i;
    char ch;
    float f;
    char c;
    char d;
    char dd;
    float ff;


};

int main()
{

    struct Demo dobj;



    printf("size of structure is:%d\n",sizeof(dobj));

    return 0;
}