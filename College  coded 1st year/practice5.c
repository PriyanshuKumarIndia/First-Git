#include <stdio.h>
int main()
{
    int y,days,m,w,d;
    printf("Enter days to change : ");
    scanf("%d",&days);
    if(days>0)
    {
    y=days/365;
    m=(days%365)/30;
    w=((days%365)%30)/7;
    d=(((days%365)%30)%7);
    }
    else
    {
        printf("Invalid Input.");
        return 1;
    }
    printf("Years = %d\n",y);
    printf("Months = %d\n",m);
    printf("Weeks = %d\n",w);
    printf("Days = %d",d);
}