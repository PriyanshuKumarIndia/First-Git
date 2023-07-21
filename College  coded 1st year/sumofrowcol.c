#include <stdio.h>
int main()
{
    int a[2][3],i,j,sumR,sumC;
    printf("Enter the elements :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Here is the matrix :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        sumR=0;
        for(j=0;j<3;j++)
        {
            sumR+=a[i][j];
        }
            printf("The sum of row index %d is : %d\n",i,sumR);
    }
    for(j=0;j<3;j++)
    {
        sumC=0;
        for(i=0;i<2;i++)
        {
           sumC+=a[i][j];
        }
        printf("The sum of column index %d is : %d\n",j,sumC);
    }
    return 0;
}