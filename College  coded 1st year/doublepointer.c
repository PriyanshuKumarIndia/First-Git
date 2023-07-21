#include <stdio.h>
int main()
{
    int a=10,b=9,*p=&a,*q=&b,**r=&p,**s=&q;
    printf("The address of a is %d %d %d\n",&a,p,*r);
    printf("The value of a is %d %d %d\n",a,*p,**r);
    printf("The address of both pointers is %d %d",r,s);
}