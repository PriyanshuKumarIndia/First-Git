#include <stdio.h>
int prime (int a)
{
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,v;
    printf("Enter number : ");
    scanf("%d",&a);
    v=prime(a);
    printf("%d is v\n",v);
    if(v)
    printf("%d is prime.",a);
    else
    printf("%d is not prime.",a);
}