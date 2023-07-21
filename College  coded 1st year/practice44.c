#include <stdio.h>
#include <math.h>
int main()
{
    float a,b;
    printf("Enter value : ");
    scanf("%f",&a);
    if(a!=0)
    b=sin(1/a);
    else
    {
    printf("Operation not possible.");
    return 0;
    }
    printf("%.4f",b);
}