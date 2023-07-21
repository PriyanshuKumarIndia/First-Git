#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *p=NULL;
    char ch[20];
    int a=10;
    float m=900.0;
    printf("Enter the string : ");
    gets(ch);
    p=fopen("abc.txt","w");
    if(p==NULL)
    {
        printf("ERROR 404!");
        exit(1);
    }
    fputs(ch,p);
    fprintf(p,"%d %f",a,m);
    fclose(p);
}