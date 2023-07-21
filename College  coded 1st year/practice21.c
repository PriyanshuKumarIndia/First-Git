#include <stdio.h>
int main()
{
    int a,b,s=0,ua,ub;
    printf("Input first number : ");
    scanf("%d",&a);
    printf("Input second number : ");
    scanf("%d",&b);
    if(a>b)
    {
        ua=a;
        ub=b;
    }
    if(b>a)
    {
        ua=b;
        ub=a;
    }
    printf("The odd numbers between %d and %d are :-\n",ub,ua);
    while(ub<=ua)
    {
        if(ub%2!=0)
        {
            printf("%d\n",ub);
            s+=ub;
        }
      
        ub++;
    }
    printf("Sum = %d",s);
}