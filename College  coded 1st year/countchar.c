#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *p=NULL;
    char c;
    int l=1,b=0,pos;
    p=fopen("abc.txt","r+");
    if(p==NULL)
    {
        printf("Error 404!");
        exit(1);
    }
    while((c=fgetc(p))!=EOF)
    {
       // c=fgetc(p);
       b++;
        if(c=='\n')
        {
           l++;
        }
    }
    fseek(p,0,SEEK_END);
    pos=ftell(p);
    printf("The length is %d\n",pos);
    fclose(p);
    printf("There is %d line in this file.",l);
    printf("\nThere is %d character in this file.",b);
}