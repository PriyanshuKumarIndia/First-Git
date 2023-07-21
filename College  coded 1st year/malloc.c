#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p,a,b,i;
    printf("Enter the size you want for MA : ");
    scanf("%d",&b);
    p=(int*) malloc(b*sizeof(int));
    printf("Enter the values : ");
    for(i=0;i<b;i++)
    {
       scanf("%d",(p+i));
    }
    for(i=0;i<b;i++)
    {
        printf("\nThe values are : %d\n",*(p+i));
    }
    free(p);
    printf("\nThe values at last JOKE : %d\n",*(p+1));
}