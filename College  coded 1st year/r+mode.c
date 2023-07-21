#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *p=NULL;
    char ch[1000];
    p=fopen("abc.txt","r+");
    if(p==NULL)
    {
        printf("File does not exist.");
        exit (1);
    }
    printf("Enter the charcter to add : ");
    gets(ch);
    fputs(ch,p);
   // fprintf(p,"\n%s",ch);
 /* while(!feof(p))
  {
    fgets(ch,1000,p);
    printf("%s",ch);
  }*/
    printf("\nCommand executed sucessfully!\nGo and check.");
}