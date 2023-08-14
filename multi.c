#include<stdio.h>

    int Multiplication(int No1,int No2)
 {
    int Output = 0;
    Output = No1 * No2;
    return Output;
 }






int main()
{

    int A = 10, B = 11;
    int Ans = 0;
    Ans = Multiplication(A,B);
    printf("multiplication is : %d\n",Ans);




    return 0;
}