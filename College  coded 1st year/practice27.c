#include <stdio.h>
int main ()
{
    int a,i,j,s=0;
    printf("Enter the number of lines : ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",++s);
        }
        printf("\n");
    }
}