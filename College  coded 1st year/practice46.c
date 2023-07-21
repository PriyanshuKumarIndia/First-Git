#include <stdio.h>
int main()
{
    float a[10],avg,s=0;
    int i,p=0,max=0,min=0;
    printf("Enter the number (Enter 0 or negative number to terminate) : \n");
    for(i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
         if(a[i]<=0)
        {
            break;
        }
        if(a[i]>=a[max])
        {
            max=i;
        }
        if(a[i]<=a[min])
        {
            min=i;
        }
        if(a[i]>0)
        {
            p++;
        }
       
        s+=a[i];
    }
    avg=s/i;
    printf("Number of postive value : %d\n",p);
    printf("Value of max : %f\n",a[max]);
    printf("Value of min : %f\n",a[min]);
    printf("average is : %f\n",avg);
}