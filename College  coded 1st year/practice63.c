#include <stdio.h>
int main()
{
    int a,i,c=0,rem;
    printf("Enter the number : ");
    scanf("%d",&a);
    for(i=0;a!=0;i++)
    {
        rem=a%10;
        if(rem==3)
        {
            c++;
        }
        a=a/10;
    }
    printf("There are %d threes in this number.",c);
}