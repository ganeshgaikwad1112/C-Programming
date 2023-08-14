#include<stdio.h>

int X = 10;

void Demo()
{
    int B = 30;
    printf("value from the demo:%d\n",B);
    printf("value from the demo:%d\n",X);

}

int main()
{

    int A = 20;
    printf("value from the main:%d\n",A);
    printf("value from the main:%d\n0",X);

    Demo();
    return 0;


}