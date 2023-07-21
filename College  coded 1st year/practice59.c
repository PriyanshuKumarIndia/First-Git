#include <stdio.h>
int main()
{
    int a,i,rem,num=0;
    printf("Enter the value : ");
    scanf("%d",&a);
    for(i=0;i<7;i++)
    {
        rem=a%10;
        a=a/10;
        num=(num*10)+rem;
    }
    for(i=0;i<7;i++)
    {
        rem=num%10;
        num/=10;
        printf("%d  ",rem);
    }
}