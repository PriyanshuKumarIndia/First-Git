#include <stdio.h>
#include <math.h>
int main ()
{
    int a,i,j,s=0;
    printf("Enter the number of lines : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=3;j++)
        {
            s=pow(i,j);
            printf("%d ",s);
        }
        printf("\n");
    }
}