#include <stdio.h>
int factorial(int num)
{
    int i;
    int n,s=1;
    n=num;
    for(i=1;i<=num;i++)
    {
        s=s*n;
        n--;
    }
    return s;
}
int main()
{
    int i,j,k;
    for(i=0;i<11;i++)
    {
        printf("%d ",i);
        for(j=0;j<=i;j++)
        {
            k= (factorial(i))/(factorial(i-j)*factorial(j));
            printf("%d ",k);
        }
        printf("\n");
    }
}