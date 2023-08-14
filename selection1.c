#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int ino)
{
    if((ino % 2)== 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ivalue=0;
    bool bRet;

    printf("Enter one numner\n");
    scanf("%d",&ivalue);

    bRet=CheckEven(ivalue);
    if(bRet == true)
    {
        printf("it is even number");
    }
    else
    {
        printf("it is odd number");
    }
    return 0;
}