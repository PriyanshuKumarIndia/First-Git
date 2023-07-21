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
   
    printf("Enter the updated size :");
    scanf("%d",&a);
    if(a>b)
    {
    p=(int*) realloc(p,a * sizeof(int));
    printf("Enter updated values : ");
    for(i=0;i<(a-b);i++)
    {
       scanf("%d",(p+b+i));
    }
    }
    else
    {
        printf("\nPrinting old value as updated values.\n");
    }
    printf("The updated values are : ");
    for(i=0;i<a;i++)
    {
        printf("%d\t",*(p+i));
    }
    free(p);
    //printf("\nThe values at last JOKE : %d\n",*(p+1)); free krne ke baad jaada tez na bane its not safe for pc sir.
}