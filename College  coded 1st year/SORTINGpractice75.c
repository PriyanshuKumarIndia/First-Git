#include <stdio.h>
int main()
{
    int a,i,num[15],j,k;
    printf("How many number is to be sorted ? ");
    scanf("%d",&a);
    printf("Enter numbers : ");
    for(i=0;i<a;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(num[i]<num[j])
            {
                k=num[i];
                num[i]=num[j];
                num[j]=k;
            }
        }
    }
    printf("Sorted numbes are :\n");
    for(i=0;i<a;i++)
    {
        printf("%d\n",num[i]);
    }
}