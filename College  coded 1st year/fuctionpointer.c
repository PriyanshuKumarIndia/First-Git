#include <stdio.h>
int sum(int,int);
int main()
{
    int (*p)(int,int)=&sum,s;
    s=(*p)(3,6);
    printf("sum=%d",s);
}
int sum(int a,int b)
{
    return a+b;
}