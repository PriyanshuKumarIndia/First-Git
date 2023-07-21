#include <stdio.h>
#include <math.h>
int main ()
{
    int a,i,j,s=0,b;
    printf("Enter the number of lines : ");
    scanf("%d",&a);
    printf("Enter number of charcters in line : ");
    scanf("%d",&b);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            printf("%d ",++s);
        }
        printf("\n");
    }
}