#include <stdio.h>
int main()
{
    int a,rem=0,s;
    printf("Enter the number : ");
    scanf("%d",&a);
    while(a!=0)
    {
        s=a%10;
        rem=(rem*10)+s;
        a=a/10;
    }
    printf("Reversed number is %d",rem);
}