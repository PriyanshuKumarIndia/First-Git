#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers to check : ");
    scanf("%d  %d  %d",&a,&b,&c);
    if(a==b || a==c || b==c)
    {
        printf("Any number is same please enter different number.");
        return 0 ;
    }
    else
    {
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the largest among these numbers.",a);
        }
        else{
            printf("%d is largest among these numbers.",c);
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            printf("%d is largest among these numbers.",b);
        }
        else
        {
            printf("%d is largest among these numbers.",c);
        }
    }
    }
}