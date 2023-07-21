#include <stdio.h>
int main()
{
    float p,up,i,ip;
    printf("Enter price : ");
    scanf("%f",&p);
    i=(11*p)/100;
    up=i+p;
    printf("New price : %.2f\n",up);
    printf("Increased price : %.2f",i);
}