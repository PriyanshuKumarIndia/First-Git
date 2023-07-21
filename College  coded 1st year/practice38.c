#include <stdio.h>
int main()
{
    int a[5],i,b=0,c;
    printf("Enter the elements : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=a[b])
        {
            //c=i;
            b=i;
        }
    }
    printf("%d is the smallest number.\n%d is the position.",a[b],b+1);
}