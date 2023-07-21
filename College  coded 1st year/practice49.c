#include <stdio.h>
int k=0;
void prime(int);
int main()
{
    int i;
        for(int j=2;j<200;j++)
        {
            prime(j);
        }
    
}
void prime(int a)
{
   int s=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
             s++;
            break;
           
        }
    }
    if(s==0)
    {
        printf("%d ",a);
        ++k;
        if(k%10==0)
        {
            printf("\n");
        }
        
    }
}