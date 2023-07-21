#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    printf("Enter number : ");
    scanf("%d",&a);
    if(a<=51)
    printf("%d is difference.",abs(a-51));
    else
    {
        b=abs(a-51);
        printf("%d is product.",b*3);
    }
}