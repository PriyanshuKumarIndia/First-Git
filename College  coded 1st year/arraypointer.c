#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},i;
    int *p=&a[2];
    printf("The address is %d\n",p);
    p=p+2;
    *p=90;
    printf("value is %d\n",*p);
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }

}