#include <stdio.h>
int main()
{
    int a,i;
    printf("Enter number : ");
    scanf("%d",&a);
    printf("All the divisor of %d are : ",a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d\n",i);
        }
    }
}