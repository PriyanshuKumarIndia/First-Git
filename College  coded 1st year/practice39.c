#include <stdio.h>
int main()
{
    int p,r,t,i,f;
    printf("Enter principle value : ");
    scanf("%d",&p);
    printf("Enter intrest rate (in percent ) : ");
    scanf("%d",&r);
    printf("Enter time period (in year) : ");
    scanf("%d",&t);
   // f=p*(r*t);
   // printf("%d is value of f\n",f);
    i=(p*r*t)/100;
    printf("%d is interest.",i);
}