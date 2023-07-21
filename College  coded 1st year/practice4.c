#include <stdio.h>
#define PI 3.14
int main ()
{
    float radius,area,per;
    printf("Enter the radius of circle : ");
    scanf("%f",&radius);
    per=2*(PI*radius);
    area=PI*(radius*radius);
    printf("The perimeter of the circle is %f\n",per);
    printf("The area of the circle is %f",area);
}