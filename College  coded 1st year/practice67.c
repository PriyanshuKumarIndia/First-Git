#include <stdio.h>
int main()
{
    int a,i,rem,m,s=1;
    printf("Enter the number to get factorial : ");
    scanf("%d",&a);
    //m=a;
    for(i=a;i>1;i--)
    {
        s*=i;
    }
    printf("%d is factorial\n",s);
    for(i=0;s!=0;i++)
    {
        if(s%10==0)
        {
            s/=10;
        }
        else
        {
            rem=s%10;
            printf("%d is the last non zero number.",rem);
            return 0;
        }
    }
}