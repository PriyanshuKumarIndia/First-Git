#include <stdio.h>
int main()
{
    int a[2][3],i,j;
    printf("Enter the elements of array :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Here is the normal matrix :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Here is the transpose matrix :\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<2;i++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}