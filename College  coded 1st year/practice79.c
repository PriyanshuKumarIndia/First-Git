#include <stdio.h>
int test(int a)
{
    return (a%3==0) || (a%7==0);
}
int main()
{
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    printf("%d",test(a));
}