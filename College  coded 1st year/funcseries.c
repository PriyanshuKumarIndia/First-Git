#include <stdio.h>
int series(int);
int fact(int);
int main()
{
    int a,sum;
    printf("Enter number : ");
    scanf("%d",&a);
    sum=series(a);
    printf("Sum=%d",sum);
}
int series(int a)
{
    int sum=0;
    for(int i=1;i<=a;i++){
    sum+=((fact(i))/i);
    }
    return sum;
}
int fact(int a)
{
    int sum=1;
    for(int i=2;i<=a;i++)
    {
        sum*=i;
    }
    return sum;
}