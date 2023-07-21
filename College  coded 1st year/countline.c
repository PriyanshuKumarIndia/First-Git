#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *p=NULL;
    char c;
    int l=1;
    p=fopen("abc.txt","r+");
    if(p==NULL)
    {
        printf("Error 404!");
        exit(1);
    }
    while((c=fgetc(p))!=EOF)
    {
       // c=fgetc(p);
        if(c=='\n')
        {
           l++;
        }
    }
    fclose(p);
    printf("There is %d line in this file.",l);
}