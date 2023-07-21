#include <stdio.h>
#include <string.h>
int main()
{
    char c;
    while((c=getchar())!=EOF)
    {
         printf("%c",c);
    }
}