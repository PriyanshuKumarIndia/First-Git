#include <stdio.h>
int main()
{
    int w,x,y,z;
    printf("Enter the number of rows of first matrix you want : ");
    scanf("%d",&x);
    printf("Enter the number of columns of first matrix you want : ");
    scanf("%d",&y);
    printf("Enter the number of rows of second matrix you want : ");
    scanf("%d",&w);
    printf("Enter the number of columns of second matrix you want : ");
    scanf("%d",&z);
    int a[x][y],b[y][z],c[x][z],i,j,k,sum;
    if(y==w)
    {
    for(i=0;i<x;i++)
    {
        printf("Enter the elements of row index %d of first matrix :\n",i);
        for(j=0;j<y;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<y;i++)
    {
        printf("Enter the elements of row index %d of second matrix :\n",i);
        for(j=0;j<z;j++)
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
    for(i=0;i<y;i++)
    {
        for(j=0;j<z;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    } 
    printf("Here is the product :\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<z;j++)
        {
            sum=0;
            for(k=0;k<y;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    }
    else
    printf("Multiplication not Possible......Try again with correct values.");
    return 0;
} 
