#include <stdio.h>
#include <string.h>
int main()
{
    int i,l;
    char s[60];
    puts("Enter the string");
    gets(s);
    l=strlen(s);
    for(i=0;i<=l;i++)
    {
       if(s[i]!=' ')
        {  
            printf("%c",s[i]);
        }
        else
        printf("\n");
    }
}