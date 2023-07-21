#include <stdio.h>
void sq(int);
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    sq(a);
}
void sq(int a)
{
    printf("Square of %d is %d",a,a*a);
}