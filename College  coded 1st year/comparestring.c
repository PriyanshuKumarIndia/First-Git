#include <stdio.h>
#include <string.h>
int main()
{
    char a[20],b[30];
    int value;
    printf("Enter the first string to be compared : ");
    gets(a);
    printf("Enter the second string to be compared :");
    gets(b);
    value=strcmp(a,b);
    if(value==0)
    {
        printf("The strings are same.");
    }
    else
    printf("The strings are not same.");
    printf("\nThe differnce of strings are %d",value);

}