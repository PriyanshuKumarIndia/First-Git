#include <stdio.h>
int main()
{
    int a,i,t1=0,t2=1,ft;
    printf("Enter the value : ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("%d\n",t1);
        ft=t1+t2;
        t2=t1;
        t1=ft;
        
    }
}