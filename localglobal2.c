    #include<stdio.h>

    int x = 10; 

    
    void Demo()
{
    int c = 30;

    printf("value of c from the Demo %d\n",c);
    printf("value of x from the Demo %d\n",x);
    

}

    int main()
{
    int a = 20;

    printf("value of a from the main %d\n",a);
    printf("value of x from the main %d\n",x);

    Demo();

    return 0;
}
