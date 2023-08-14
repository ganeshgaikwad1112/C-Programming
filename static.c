#include<stdio.h>

void Demo()

{
    auto int A = 10;
    A++;  // increment the value by 1
    printf("value from Demo: %d\n",A);


}
void hello()
{ 
    static int B = 10;
    B++;  // increment the value by 1
    printf("value from hello: %d\n",B);    

}



int main()
{
     Demo();
     Demo();
     Demo();
     Demo();

     hello();
     hello();
     hello();
     




    return 0;

}