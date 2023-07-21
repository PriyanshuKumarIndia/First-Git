#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter x co-ordinate : ");
    scanf("%d",&a);
    printf("Enter y co-ordinate : ");
    scanf("%d",&b);
    if(a>=0 && b>=0)
    printf("Quadrant 1 (+,+)");
    else if(a<0 && b>0)
    printf("Quadrant 2 (-,+)");
    else if(a<0 && b<0)
    printf("Quadrant 3 (-,-)");
    else
    printf("Quadrant 4 (+,-)");
}