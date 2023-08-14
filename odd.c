#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    int temp[m+n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int x=0;
    for(int i=0;i<n;i++)
    {
        temp[x++]=a[i];
    }
    for(int i=0;i<m;i++)
    {
        temp[x++]=b[i];
    }
    for(int i=0;i<x;i++)
    {
        for(int j=i+1;j<x;j++)
        {
             if(temp[i]>temp[j])
             {
                 int t=temp[i];
                 temp[i]=temp[j];
                 temp[j]=t;
             }
        }
    }
    int count=0;
    for(int i=0;i<x;i++)
    {
        if(temp[i]==temp[i+1])
        {
            for(int j=i+1;j<x-1;j++)
            {
                temp[j]=temp[j+1];
                count=1;
            }
            x--;
        }
    }
    if(count==1)
    {
        x++;
    }

    if(x%2==0)
    {
        int mid=x/2;
        int mid1=x/2-1;
        int up=temp[mid]+temp[mid1];
        float result=up/2.0;
        printf("%.2f",result);
    }
    else
    {
        printf("%d",temp[x/2]);
    }
    return 0;
}