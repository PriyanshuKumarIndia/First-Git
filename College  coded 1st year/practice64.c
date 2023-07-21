#include <stdio.h>
int main()
{
    int a,i;
    float s=0,avg;
    printf("Enter the values (888 to exit) : \n");
    scanf("%d",&a);
    for(i=0;a!=888;i++)
    {
        s+=a;
        scanf("%d",&a);
    }
    avg=s/i;
    printf("%.3f is average.",avg);
}