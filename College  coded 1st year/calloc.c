#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p,n,i,a;
    printf("Enter the no. of blocks you want : ");
    scanf("%d",&n);
    printf("Enter the size of blocks you want : ");
    scanf("%d",&a);
    p=(int*) calloc(n,a*sizeof(int));
    printf("Enter the values : ");
    for(i=0;i<(n*a);i++)
    {
    scanf("%d",(p+i));
    }
    printf("The values are :");
    for(i=0;i<(n*a);i++)
    {
        printf("%d\t",*(p+i));
    }
    free(p);
    printf("\nThe JOKE value is %d",(p+1));
}