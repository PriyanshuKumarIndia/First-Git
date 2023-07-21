#include <stdio.h>
int sum(int,int);

int main()
{
    int *m;
    sum(3,9);
    printf("\nHello Bro!\n");
    sum(5,3);
    m=sum;
    printf("\n%d",*m);
}
int sum(int a,int b)
{
    printf("%d %d\n",a,b);
    int s=0;
    printf("Enter the two numners : ");
    scanf("%d %d",&a,&b);
    s=a+b;
    printf("sum=%d",s);
    return a;
}