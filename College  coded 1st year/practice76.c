#include <stdio.h>
#include <stdlib.h>
int oddeve(int);
int main()
{
     int i,a,e,o,v;
     printf("Enter the number : ");
     scanf("%d",&a);
    v= oddeve(a);
     if(v==0)
     {
        e=a;
        printf("Even numbers are : ");
        for(i=0;i<10;i++)
        {
            e+=2;
            printf("%d ",e);
        }
        o=a-1;
        printf("\nOdd numbers are : ");
        for(i=0;i<10;i++)
        {
            o+=2;
            printf("%d ",o);
        }
     }
    if(v==1)
     {
        e=a-1;
        printf("Even numbers are- : ");
        for(i=0;i<10;i++)
        {
            e+=2;
            printf("%d ",e);
        }
        o=a;
        printf("\nOdd numbers are : ");
        for(i=0;i<10;i++)
        {
            o+=2;
            printf("%d ",o);
        }
     }
}
int oddeve(int a)
{
     if(a%2==0)
     {
        return 0;
     }
     else 
     return 1;
}