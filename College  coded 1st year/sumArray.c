#include <stdio.h>
void main()
{
    int a[5],b[5],c[5],i,sum;
    printf("Enter the elements of first array :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of second array :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("Here is the sum element :\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",c[i]);
    }
}