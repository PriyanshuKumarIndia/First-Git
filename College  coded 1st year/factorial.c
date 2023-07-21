#include <stdio.h>
int main()
{
    int a,i,s=1;
    printf("Enter value : ");
    scanf("%d",&a);
    for(i=a;i>1;i--)
    {
        s*=i;
    }
    printf("Factorial is %d",s);
}