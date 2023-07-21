#include <stdio.h>
int main()
{
    int p,q,r,s;
    printf("Enter the first value : ");
    scanf("%d",&p);
    printf("Enter the second value : ");
    scanf("%d",&q);
    printf("Enter the third value : ");
    scanf("%d",&r);
    printf("Enter the fourth value : ");
    scanf("%d",&s);
    if(q>r && s>p && (r+s)>(p+q) && (p%2==0))
    {
        printf("Correcrt value!");
    }
    else{
        printf("Incorrect value!");
    }
}