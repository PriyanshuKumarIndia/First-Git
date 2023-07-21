#include <stdio.h>
int main()
{
    int a[5],i;
    printf("Enter Numbers : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Arrays values are : \n");
    for(i=0;i<5;i++)
    {
        if(a[i]<=0)
        {
            a[i]=100;
        }
        printf("a[%d] = %d\n",i,a[i]);
    }
}