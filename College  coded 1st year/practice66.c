#include <stdio.h>
int palindrome(int a)
{
    int i,m,rem,num=0;
    m=a;
    for(i=0;a!=0;i++)
    {
        rem=a%10;
        a/=10;
        num=(num*10)+rem;
    }
    if(m==num && m>1)
    {
        printf("%d\n",m);
    }
}

int prime(int a)
{
    int i,c=0;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        palindrome(a);
    }
}

int main()
{
    int j;
    printf("List of palindromes.\n");
    for(j=0;j<1000;j++)
    {
        prime(j);
    }
}