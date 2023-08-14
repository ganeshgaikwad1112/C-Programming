#include<stdio.h>

int main()
{

int iNo1 = 10;   // 4 byte

float fValue = 3.15;  // 4 byte

double dData = 3.012;   // 8 byte

char cValue = 'M';   // 1 byte

printf("int %d\n",iNo1);
printf("float %f\n",fValue);
printf("double %lf\n",dData);
printf("char %c\n",cValue);

 
return 0;
}