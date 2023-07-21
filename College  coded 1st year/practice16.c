#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,f,r1,r2;
    printf("Enter first value : ");
    scanf("%f",&a);
    printf("Enter second value : ");
    scanf("%f",&b);
    printf("Enter third value : ");
    scanf("%f",&c);
    f=(b*b)-(4*a*c);
    if(f>0 && a!=0)
    {
        f=sqrt(f);
        r1=(-b+f)/(2*a);
        r2=(-b-f)/(2*a);
        printf("%f is the first root.\n",r1);
        printf("%f is the second root.",r2);
    }
    else
    printf("Finding root not possible!"); 
}