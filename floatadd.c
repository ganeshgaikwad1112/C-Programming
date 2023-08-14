    #include<stdio.h>


    float Addition(float iNo1,float iNo2)
{
    float fOutput=0;
    fOutput=(iNo1+iNo2);
    return fOutput;
}
    int main()

{   
    float fValue1=12.5;
    float fValue2=5.32;
    float fAns=0;

    fAns=Addition(fValue1,fValue2);
    printf("the Addition of %f\n",fAns);


    return 0;

}