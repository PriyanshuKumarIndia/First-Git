#include <stdio.h>
#include <string.h>
int main()
{
    char a[30];
    int l,i,c;
    gets(a);
    puts(a);
    l=strlen(a);
   // strrev(a);
   for(i=0;i<l/2;i++)
   {
    c=a[i];
    a[i]=a[l-1-i];
    a[l-1-i]=c;  
   }
     puts(a);
}