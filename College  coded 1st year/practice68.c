#include <stdio.h>
int prime(int);
int main()
{
    int a;
    printf("Enter the number to check : ");
    scanf("%d",&a);
    prime(a);
}
int prime(int a)
{
    int i,c=0,d[a/2],m=0;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            d[m]=i;
            m++;
            c++;
        }
    }
    if(c==0)
    {
        printf("%d is prime.",a);
    }
    else
    {
        printf("factors are :\n");
        for(i=0;i<m;i++)
        {
            printf("%d\n",d[i]);
        }
    }
}
