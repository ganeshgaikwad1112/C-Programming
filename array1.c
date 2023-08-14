#include<stdio.h>

int main()

{
    //first way to initialise the array
    int Arr[4]={10,20,30,40,};  //member initialization list

    //second way to initialise the array
    int Brr[]={10,20,30,40};    // member initialization list

    //third way to initialise of array
    int Crr[4];       // member by member initialization
    Crr[0]=10;
    Crr[1]=20;
    Crr[2]=30;
    Crr[3]=40;

    return 0;

}