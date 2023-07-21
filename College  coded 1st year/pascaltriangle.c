#include <stdio.h>
int fact(int a)
{
    int i,s=1;
    for(i=a;i>1;i--)
    {
        s*=i;
    }
    return s;
}
int main()
{
    int i,j,f;
    for(i=0;i<11;i++)
    {
        for(j=0;j<=i;j++)
        {
            f=fact(i)/(fact(i-j)*fact(j));
            printf("%d ",f);
        }
        printf("\n");
    }
}