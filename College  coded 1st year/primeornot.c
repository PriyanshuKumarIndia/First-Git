#include <stdio.h>
int main()
{
    int i,a,c=0;
    printf("Enter the number to check prime or not : ");
    scanf("%d",&a);
    if(a==0||a==1)
    {
        printf("%d is niether prime nor composite.",a);
    }
    else{
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
       printf("%d is a prime number.",a);
    }
    else
    printf("%d is a composite number.",a);
    }
}