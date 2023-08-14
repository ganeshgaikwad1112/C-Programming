#include<stdio.h>
    int Substraction(int iValue1,int iValue2)

{
    int iOutput=0;
    iOutput=(iValue1-iValue2);
    return iOutput;
}
    int Multiplication(int iValue1,int iValue2)
    {
        int iOutput=0;
        iOutput=(iValue1*iValue2);
        return iOutput;
    }
    int Division(int iValue1,int iValue2)
    {
        int iOutput=0;
        iOutput=(iValue1/iValue2);
        return iOutput;
    }

    int main()

{
    int iNo1=55;
    int iNo2=3;
    int iAns=0;

    iAns=Substraction(iNo1,iNo2);
    printf("Substraction is %d\n",iAns);

    iAns=Multiplication(iNo1,iNo2);
    printf("Multiplication is %d\n",iAns);

    iAns=Division(iNo1,iNo2);
    printf("divsion is %d\n",iAns);


    return 0;
}