#include <stdio.h>
#include <string.h>
int main()
{
    int l1,l2,i;
    char a[20]="priyanshu";
    char b[20]="kumar";
   /* l1=strlen(a);
    l2=strlen(b);
    for(i=0;i<=l2;i++)
    {
       a[l1]=b[i];
       l1++;
    }*/
    //strcat(a,b);
    strncat(a,b,2);//to get only charcters you want.
    printf("%s",a);
}