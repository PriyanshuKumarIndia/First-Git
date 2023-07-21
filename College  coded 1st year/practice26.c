#include <stdio.h>
int main()
{
    int a,b,s,l,i;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    if(a>b)
    {
    l=a;s=b;
    }
    else
    {
    l=b;s=a;
    }
    for(i=s;i<=l;i++)
    {
        if(i%7==2 || i%7==3)
        {
            printf("%d\n",i);
        }
    }
}