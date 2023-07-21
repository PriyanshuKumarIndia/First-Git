#include <stdio.h>
int main()
{
    int a[5],b,i,c=4;
    printf("Enter the elements of the array : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5/2;i++)
    {
        b=a[i];
        a[i]=a[c];
        a[c]=b;
        c--;
    }
    printf("Modified array is : \n");
    for(i=0;i<5;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
}