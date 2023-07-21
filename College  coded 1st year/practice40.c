#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter value (in cm) : ");
    scanf("%f",&a);
    b=a/2.54;
    printf("%.2f cm = %.2f inches",a,b);
}