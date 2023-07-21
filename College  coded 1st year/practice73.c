#include <stdio.h>
int main()
{
    int a,i,b[10],j;
    printf("Enter the number you want : ");
    scanf("%d",&a);
    printf("Enter value :");
    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b[i];j++)
        {
            printf("#");
        }
        printf("\n");
    }
}