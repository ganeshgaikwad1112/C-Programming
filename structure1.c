#include<stdio.h>

//structure declaration
struct Demo
{
    int i;
    float f;
    double d;
    int j;

};
int main()
{
    
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    obj1.d=11.00;
    obj2.i=21;
    obj3.j=51;


    printf("size of obj 1 : %d\n",sizeof(obj1));
     printf("size of obj 1 : %d\n",sizeof(obj2));
      printf("i of obj i : %d\n",obj2.i);


   return 0;
}