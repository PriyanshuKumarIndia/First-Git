#include <stdio.h>
int main()
{
    int a[5],i;
    printf("Enter the elements of array : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Here is the array elements having value less than 5 : \n");
    for(i=0;i<5;i++)
    {
        if(a[i]<5)
        {
            printf("a[%d] = %d\n",i,a[i]); 
        }
    }
}