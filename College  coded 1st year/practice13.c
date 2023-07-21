#include <stdio.h>
int main()
{
    int i,h,m,s;
    printf("Enter the seconds : ");
    scanf("%d",&i);
    if(i<0)
    {
        printf("Ivalid input!\nTry Again........");
        return 0;
    }
    if(i>=3600)
    {
        h=i/3600;
        i=i%3600;
    }
    if(i>=60 && i<3600)
    {
        m=i/60;
        i=i%60;
    }
    if(i>=0 && i<60)
    {
        s=i;
    }
    printf("H.M.S - %d:%d:%d",h,m,s);
    return 0;
}