#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *p=NULL,*d=NULL;
    char str[1000];
    p=fopen("abc.txt","r");
    d=fopen("d.txt","a+");
    if(p==NULL && d==NULL)
    {
        printf("Can't open file!");
        exit(1);
    }
    while(!feof(p))
    {
       fgets(str,1000,p);
       fputs(str,d);
    }
    fclose(p);
    fclose(d);
    printf("Code executed sucessfully!");
}