#include <stdio.h>
void main()
{
    int a[10],i,odd=0,even=0;
    printf("Enter the elements of array :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("Number of odd digits are : %d\n",odd);
    printf("Number of even digits are : %d\n",even);
    printf("The magical digit is : %d",a[205]);
}