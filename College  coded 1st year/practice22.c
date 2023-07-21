#include <stdio.h>
#include <string.h>
int main ()
{
    int a,b=10;
    while(b!=0)
    {
    printf("Enter password : ");
    scanf("%d",&a);
    if(a==1234)
    {
        printf("Correct password :)");
        return 0;
    }
    else
    printf("Incorrect password :(\nTry again......");
    b++;
    }
}    