#include <stdio.h>
#include <string.h>
int main()
{
    int i,l;
    char c[5],s;
    printf("Enter the character to reverse :");
    gets(c);
    printf("Here is the Entered character : ");
    puts(c);
    l=strlen(c);
    for(i=0;i<l/2;i++)
    {
        s=c[i];
        c[i]=c[l-1-i];
        c[l-1-i]=s;
    }
    printf("Here is the reversed charcter : ");
    puts(c);
}