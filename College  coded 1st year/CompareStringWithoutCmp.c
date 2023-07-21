#include <stdio.h>
int main()
{
    char a[20],b[40];
    int i,f=0;
    printf("Enter the first string :");
    gets(a);
    printf("Enter the second string :");
    gets(b);
    for(i=0;a[i]!='\0'||b[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
           f++;
           break;
        }
        
    }
    if(f!=0)
    {
        printf("The strings are not same.");
    }
    else 
    printf("The strings are same.");
}