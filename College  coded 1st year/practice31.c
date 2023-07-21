#include <stdio.h>
int main ()
{
    int i;
    float s=0;
    for(i=1;i<=50;i++)
    {
        s+=(float)1/(float)i;
    }
    printf("Value = %.2f",s);
}