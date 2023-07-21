#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *p=NULL;
    char c,d,e;
    int pos;
    p=fopen("abc.txt","r+");
    if(p==NULL)
    {
        printf("File does not exist.");
        exit(1);
    }
    fseek(p,6,SEEK_SET);
    while(!feof(p))
    {
    e=fgetc(p);
    printf("%c",e);
    }
    fseek(p,-2,SEEK_CUR);
    c=fgetc(p);
    printf("\nValue after is %c",c);
    fseek(p,-2,SEEK_END);
    d=fgetc(p);
    printf("\nLast value is %c",d);
    fseek(p,0,SEEK_END);
    pos=ftell(p);
    printf("\nThe length is %d",pos);
    fclose(p);
    printf("\nOperation sucessful!");
}