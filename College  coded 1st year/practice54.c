#include <stdio.h>
int main()
{
    int i;
    for(i='A';i<='z';i++)
    {
        if(i>='A' && i<='Z' || i>='a' &&  i<='z')
        {
            printf("[%d - %c]  ",i,i);
        }
    }
}