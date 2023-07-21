#include <stdio.h>
int main()
{
    int a[5],pos,s=0,i;
    printf("Enter 5 numbers : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>s)
        {
            pos=i;
            s=a[i];
        }
    }
    printf("%d is the largest.\n%d is the position.",a[pos],pos+1);
}