#include <stdio.h>
int main()
{
    int a=84,c,*p=&a;
    *p=20;
    c=*p;
    printf("Here is the address of a : %d\n",p);
    printf("The address of a is %x",&a);//I use %x to print value in hexadecimal form
    printf("\nThe value in a is %d",*p);
    printf("\nThe value in a is %d",c);
} 