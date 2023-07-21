#include <stdio.h>
int main()
{
    int a,b,s=0,c,d,i;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    if(a>b)
    {
        c=a;
        d=b;
    }
    if(b>a)
    {
        c=b;d=a;
    }
    for(i=d;i<=c;i++)
    {
        if(i%17!=0)
        {
            s+=i;
        }
    }
    printf("%d is sum.",s);
}