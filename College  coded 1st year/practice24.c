#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    if(a%b==0)
    {
        c=a/b;
        printf("Quotient=%d",c);
    }
    else
    printf("Division not possible.");
}