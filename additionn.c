#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;
    int i = 0;
    int iSize = 0;
    int iSum = 0;

    printf("Enter the how many elements you want\n ");
    scanf("%d,",&iSize);
    
    Arr = (int*)malloc(iSize* sizeof(int));
    printf("Memory Allocation is successfully\n");

    printf("plz enter the elements you want??\n");
    
    for(i=0; i<iSize; i++)
    {
        scanf("%d",&Arr[i]);

    }
    for(i=0; i<iSize; i++)
    {

        iSum = iSum + Arr[i];
    }
        printf("Addition is : %d\n",iSum);
    
    
    return 0;
}