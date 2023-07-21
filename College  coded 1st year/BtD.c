#include <stdio.h>
int btd(int a)
{
    int s=0,x=1,y;
    while(a>0)
    {
    y=a%10;
    s=s+x*y;
    x*=2;
    a/=10;
    }
    printf("%d",s);
}
int main()
{
    int a;
    printf("Enter binary value : ");
    scanf("%d",&a);
    btd(a);
}