#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    int i,l;
    printf("Enter the string : ");
    gets(a);
    puts(a);
    l=strlen(a);
   // strlwr(a);
   //for UPPER case
   for(i=0;i<l;i++)
   {
    if(a[i]>='a' && a[i]<='z')
    {
        a[i]-=32;
    }
   }
   //for lower case
   for(i=0;i<l;i++)
   {
    if(a[i]>='A' && a[i]<='Z')
    {
        a[i]+=32;
    }
   }
    puts(a);
}