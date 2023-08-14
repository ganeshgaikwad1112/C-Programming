#include<stdio.h>

int Addition(int ino1,int ino2)
{
    int iAns=0;
    iAns=ino1+ino2;
    return iAns;


}

int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int iret=0;

    printf("Enter first number\n\n");
    scanf("%d",&ivalue1);

    printf("Enter second number\n\n");
    scanf("%d",&ivalue2);
        
    iret=Addition(ivalue1,ivalue2);

    printf("Addition is :%d",iret);




    return 0;
}