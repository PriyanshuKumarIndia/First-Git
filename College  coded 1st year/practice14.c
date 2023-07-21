#include <stdio.h>
int main()
{
    int i,y,m,d;
    printf("Enter the number of days : ");
    scanf("%d",&i);
    if(i<0)
    {
        printf("Invalid input!");
    }
    y=i/365;
    m=(i%365)/30;
    d=i-((y*365)+(m*30));
    printf("%d Year(s)\n%d Month(s)\n%d Days.",y,m,d);
}
