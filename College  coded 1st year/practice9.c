#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        printf("%d is the largest.",a);
        return 1;
    }
    if(b>=a && b>=c)
    {
        printf("%d is the largest.",b);
        return 1;
    }
    else{
        printf("%d is the largest.",c);
    }
}