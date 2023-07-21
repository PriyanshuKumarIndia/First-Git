#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number : ");
    scanf("%d",&a);
    if(a<0)
    {
        a*=-1;
    }
    printf("Updated value = %d",a);
}