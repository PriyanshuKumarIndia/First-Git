#include <stdio.h>
int main()
{
    int m;
    printf("Enter the row and column you want : ");
    scanf("%d",&m);
    int a[m][m],b[m][m],c[m][m],i,j;
    for(i=0;i<m;i++)
    {
        printf("Enter the element of row of index %d of first matrix : ",i);
        for(j=0;j<m;j++)
        {
           scanf("%d",&a[i][j]); 
        }
    }
    for(i=0;i<m;i++)
    {
        printf("Enter the element of row of index %d of second matrix : ",i);
        for(j=0;j<m;j++)
        {
           scanf("%d",&b[i][j]);
        }
    }
    printf("Here is the first matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
           printf("%d\t",a[i][j]); 
        }
        printf("\n");
    }
    
    printf("Here is the second matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
           printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    int k,sum=0;
    printf("Here the product of both matrices :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            sum=0;
            for(k=0;k<m;k++)
            {
                sum+=a[i][k]*b[k][j];
                c[i][j]=sum;
            }   
        }    
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
           printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
  return 0;
}