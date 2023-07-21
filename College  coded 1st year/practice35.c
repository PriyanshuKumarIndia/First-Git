#include <stdio.h>
int main()
{
    int i,a,b=1,c;
    printf("Enter size of array : ");
    scanf("%d",&a);
    int d[a];
    d[0]=a;
    for(i=1;i<=a;i++)
    {
        d[i]=d[i-1]*3;
    }
    printf("Final array : \n");
    for(i=0;i<a;i++)
    {
        printf("d[%d] is %d\n",i,d[i]);
    }
}