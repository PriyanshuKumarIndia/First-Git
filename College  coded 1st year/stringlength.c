#include <stdio.h>
#include <string.h>
int main ()
{
    int c=0,i=0;
    char name[20];
    printf("Enter name: ");
    gets(name);
    puts(name);
   c=strlen(name);
  /* while(name[i]!='\0')
   {
       c++;
       i++;
   }
  /*for(i=0;name[i]!='\0';i++)
  {
      c+=1;
  }*/
    printf("Length of the string is: %d",c);

}