#include <stdio.h>
int main()
{
    float a[5],c=0;
    int i,b=0,d=0;
    printf("Enter the 5 values : ");
    for(i=0;i<5;i++)
    {
        scanf("%f",&a[i]);
        if(a[i]>=a[b])
        {
            b=i;
        }
        if(a[i]<=a[d])
        {
            d=i;
        }
    }
    c=a[b]-a[d];
    printf("%f",c);
}