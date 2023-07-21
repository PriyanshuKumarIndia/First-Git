#include <stdio.h>
#include <string.h>
int main()
{
    char a[15],b[15];
    int c=0,i;
    printf("Enter the string : ");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
       b[i]=a[i];
    }
    b[i]='\0';
    for(i=0;b[i]!='\0';i++)
    {
        printf("%c",b[i]);
    }
    printf("\n");
    printf("Copied string is %s\n",b);
    printf("%d is i\n",i);
    c=strlen(b);
    printf("%d is char.",c);
}