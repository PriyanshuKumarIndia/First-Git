#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    if(a==b)
    {
        printf("%d is product.",a*3);
    }
    else
    printf("%d is sum.",a+b);
}