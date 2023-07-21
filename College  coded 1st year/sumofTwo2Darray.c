#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the number of rows you want : ");
    scanf("%d",&x);
    printf("Enter the number of columns you want : ");
    scanf("%d",&y);
    int a[x][y],b[x][y],c[x][y],i,j;
    for(i=0;i<x;i++)
    {
        printf("Enter the elements of row index %d of first matrix :\n",i);
        for(j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<x;i++)
    {
        printf("Enter the elements of row index %d of second matrix :\n",i);
        for(j=0;j<y;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Here is the first matrix :\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Here is the second matrix :\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }  
    printf("Here is the sum of two matrix :\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
     return 0;
}   