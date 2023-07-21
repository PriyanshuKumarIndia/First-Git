#include <stdio.h>

int main ()
{
    
    int i,a,s;
    printf("Enter the number : ");
    scanf("%d",&a);
    for(i=1;i<11;i++)
    {
        s=a*i;
        printf("%d * %d = %d\n",a,i,s);
    }
    
   
}