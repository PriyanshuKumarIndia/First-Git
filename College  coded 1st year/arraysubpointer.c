#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},d;
    int *p=a,*q=&a[4];
    printf("The adress of a[0] is %d\n",p);
    printf("The address of a[4] is %d\n",q);
    d=p-q;
    printf("result is %d",d);
    *q=25;
    d=q-p;
    printf("\nResult is %d\n",d);
    *p=27;
    q=q-3;
    printf("The updated address is %d\n",q);
    p=p+3;
    printf("The updated adress is %d\n",p);
    d=p-q;
    printf("RESULT is %d",d);

}