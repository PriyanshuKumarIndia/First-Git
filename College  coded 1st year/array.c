#include <stdio.h>
void main()
{
    int a[5],i;
    printf("Enter the elements of array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Here is the array :\n");
    for(i=4;i>-1;i--)
    {
        printf("%d\t",a[i]);
    }

}