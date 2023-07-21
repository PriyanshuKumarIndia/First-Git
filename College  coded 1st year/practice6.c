#include <stdio.h>
int main()
{
    float weight1,weight2,avg,item1,item2;
    printf("Enter the weight of first item (in Kg) : ");
    scanf("%f",&weight1);
    printf("Enter the number of first item : ");
    scanf("%f",&item1);
    printf("Enter the weight of second item (in Kg) : ");
    scanf("%f",&weight2);
    printf("Enter the number of second item : ");
    scanf("%f",&item2);
    avg=((weight1*item1)+(weight2*item2))/(item1+item2);
    printf("The average is %f",avg);
}