#include <stdio.h>
#include <math.h>
int main()
{
    float a,b;
    int i;
    for(i=0;i<11;i++)
    {
        a=pow(2,i);
        b=pow(2,-i);
        printf("%d %.0f %.4f\n",i,a,b);
    }
}