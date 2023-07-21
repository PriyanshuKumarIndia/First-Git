#include <stdio.h>
int main ()
{
    int a,rem,i,s=0,j=0;
    printf("Enter any number : ");
    scanf("%d",&a);
    for(i=0;i<6;i++)
    {
        if(a!=0)
        {
        rem=a%10;
        a=a/10;
        s+=rem;
        j++;
        }
    }
    printf("%d is the sum\n",s);
    printf("%d is the count",j);
}