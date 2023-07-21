#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *p=NULL;
    char ch;
    //int a=10;
   // float m=900.0;
   // printf("Enter the string : ");
   // gets(ch);
    p=fopen("abc.txt","r");
    if(p==NULL)
    {
        printf("ERROR 404!");
        exit(1);
    }
    while(!feof(p))
    {
        ch=fgetc(p);
        printf("%c",ch);
    }

   // fgets(ch,20,p);
    //puts(ch);
}    