#include <stdio.h>
int main ()
{
    int a[2][3],b[3][2],i,j,k,c[2][2],sum=0;
    for(i=0;i<2;i++)
    {
        printf("Enter the elements of first matrix of row index %d : ",i);
        for(j=0;j<3;j++)
        {
           scanf("%d",&a[i][j]); 
        }
    }
    printf("Here is the first matrix : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        printf("Enter the elements of second matrix of row index %d : ",i);
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Here is the second matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
               sum+=a[i][k]*b[k][j];
               c[i][j]=sum;
               
            }
        }
    }
    printf("Hereis the product of both matrix : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}