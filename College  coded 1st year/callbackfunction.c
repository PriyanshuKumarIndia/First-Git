#include <stdio.h>
void sum(int,int);
void sub(int,int);
void d(void (*p)(int,int));
int main()
{
    d(sub);
    d(sum);
    sum(9,8);
    sub(9,8);
}
void sum(int a,int b)
{
    printf("sum is %d\n",a+b);
}
void sub(int a,int b)
{
    printf("difference is %d\n",a-b);
}
void d(void (*p)(int,int))
{
    int a,b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    (*p)(a,b);
}