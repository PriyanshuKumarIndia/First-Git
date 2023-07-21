#include <stdio.h>
int main()
{
    float b,p;
    int i;
    for(i=0;i<=10;i++)
    {
        if(i==0)
        {
            p=1;
        }
        else
        p=p*2;
        b=1.0/p;
        printf("%d %.0f %.3f\n",i,p,b);
    }

}