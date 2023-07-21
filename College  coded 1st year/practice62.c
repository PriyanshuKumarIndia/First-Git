#include <stdio.h>
int main()
{
    int a,i,rem,num=0,p;
    printf("Enter the value : ");
    scanf("%d",&a);
    p=a;
    for(i=0;a!=0;i++)
    {
        rem=a%10;
        a=a/10;
        num=(num*10)+rem;
    }
    if(p==num)
    {
        printf("Palindrome number.");
    }
    else
    printf("Non palindrome number.");
}