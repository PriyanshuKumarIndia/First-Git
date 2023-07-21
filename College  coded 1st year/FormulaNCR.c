#include <stdio.h>
int fact(int a)
{
    int i,s=1;
    for(i=a;i>1;i--)
    {
        s*=i;
    }
    return s;
}
int main()
{
    int a,r,p;
    printf("Enter the value of n : ");
    scanf("%d",&a);
    printf("Enter the value of r : ");
    scanf("%d",&r);
    p=fact(a)/(fact(r)*fact(a-r));
    printf("Value is %d",p);
}