#include <stdio.h>
int main()
{
    int i,j=1;
    float b,s=0;
    for(i=1;i<=7;i+=2)
    {
       b=(float)i/(float)j;
       s+=(float)b;
       j*=2;
    }
    printf("Value = %.2f",s);
}