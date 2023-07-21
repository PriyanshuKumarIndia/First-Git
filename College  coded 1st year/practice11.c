#include <stdio.h>
int main()
{
    float fuel,distance;
    printf("Enter Distance travelled in KM : ");
    scanf("%f",&distance);
    printf("Enter the fuel consuption in Liter(s) : ");
    scanf("%f",&fuel);
    printf("Average fuel consuption is %.2f liter(s)",distance/fuel);
}