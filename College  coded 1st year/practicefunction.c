#include <stdio.h>
int avg(int a[],int y)
{
    int s=0,i;
    for(i=0;i<y;i++)
    {
        s+=a[i];
    }
    printf("Size of array in avg function is %d",sizeof(a));
    return s/y;
}
int main()
{
    int a[5],i,b,m;
    for(i=0;i<5;i++)
    {
    printf("Enter the elements of array : ");
    scanf("%d",&a[i]);
    }
    m=sizeof(a)/sizeof(a[0]);
    b=avg(a,m);
    printf("\n%d is avg",b);
    printf("\nSize of array in main function is %d",sizeof(a));
}