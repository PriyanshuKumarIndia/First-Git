#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *p=NULL;
    char c;
    p=fopen("abc.txt","r");
    if(p==NULL)
    {
        printf("File does not exist.");
        exit(1);
    }
    fseek(p,6,SEEK_SET);
    while(!feof(p))
    {
    c=fgetc(p);
    printf("%c",c);
    }
    fseek(p,-2,SEEK_CUR);
    c=fgetc(p);
    printf("\nValue after is %c",c);
    fseek(p,-2,SEEK_END);
    c=fgetc(p);
    printf("\nLast value is %c",c);
    fclose(p);
    printf("\nOperation sucessful!");
}