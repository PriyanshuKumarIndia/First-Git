#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value to check : ");
    scanf("%d",&a);
    if(a>0 && a>80)
    {
         printf("Invalid value!");
    }
    else
    {
        if(a>0 && a<=20)
        {
            printf("Range [0,20]");
        }
        if(a>20 && a<=40)
        {
            printf("Range [20,40");
        }
        if(a>40)
        {
            printf("Range [40,80]");
        }
    }
}