#include <stdio.h>
int main()
{
    int a[5],s=0,i;
    for(i=0;i<5;i++)
    {
        printf("Enter index %d number : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2 !=0)
        {
            s+=a[i];
        }
        else
        printf("%d is even number so can't be added as sum.\n",a[i]);
    }
    printf("%d is result.",s);
}