#include <stdio.h>
#include <math.h>
int main()
{
    int a,i,s=0,p=0;
    printf("Enter the number : ");
    scanf("%d",&a);
    if(a>100)
    {
        printf("Out of limit.");
    }
    else
    {
    for(i=1;i<=a;i++)
    {
        s+=pow(i,4);
        i+=p;
        p++;
    }
    printf("Sum =%d",s);
    }
}