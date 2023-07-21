#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,s,p,l,ab;
    printf("Enter first value : ");
    scanf("%f",&a);
    printf("Enter second value : ");
    scanf("%f",&b);
    printf("Enter third value : ");
    scanf("%f",&c);
    if((a+c)>b || (a+b)>c || (b+c)>a)
    {
        printf("%.1f,%.1f and %.1f can make a triangle.\n",a,b,c);
        p=(a+b+c);
        printf("%.1f is the perimeter.",p);
    }
}