#include<stdio.h>

    int A=10;   // global variable

void Demo()     // function defination
{
    auto int B=20;        
    register int D=20;
    static int E=20;

    B++;
    D++;
    E++;
    

    printf("value of auto variable:%d\n",B);
    printf("value of register variable:%d\n",D);
    printf("value of static variable:%d\n",E);


}

int main()

{
    int C=30;
    printf("first function call\n");
    Demo();       //function call

    printf("second function call\n");
    Demo();       //function call

    printf("third function call\n");
    Demo(); 
    return 0;

}