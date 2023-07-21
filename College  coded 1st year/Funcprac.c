#include <stdio.h>
int odeve(int);
int main()
{
    int a,b;
    printf("Enter the number : ");
    scanf("%d",&a);
    b= odeve(a);
    if(b)
    {
        printf("%d is even.",a);
    }
    else{
        printf("%d is odd.",a);
    }
}
int odeve(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
