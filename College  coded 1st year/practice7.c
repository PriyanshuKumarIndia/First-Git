#include <stdio.h>
#include <string.h>
int main()
{
    char id[15];
    float hour,amt,salary;
    printf("Enter the ID of the employe : ");
    gets(id);
    printf("Enter How many HE/She works : ");
    scanf("%f",&hour);
    printf("Amount per hour (in $) : ");
    scanf("%f",&amt);
    salary=hour*amt;
    printf("\nThe salary of the %s employe is %.2f $.",id,salary);
}