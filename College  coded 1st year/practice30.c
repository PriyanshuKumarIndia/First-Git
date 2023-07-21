#include <stdio.h>
int main ()
{
    int a[15],i,j,s=0;
    float avg;
    printf("Enter marks (0 to terminate ) : ");
    for(i=0;i<15;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            j=i;
        break;
        }
        s+=a[i];
    }
    avg=(float)s/(float)j;
    printf("Average is %.2f",avg);
}