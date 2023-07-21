#include <stdio.h>
int main()
{
    float w,h,bmi;
    printf("Enter the weight (in kg) ");
    scanf("%f",&w);
    printf("Enter the height (in m) ");
    scanf("%f",&h);
    bmi=w/(h*h);
    if(bmi<18.5)
    {
        printf("Underweight.");
    }
    else if (bmi>=18.5 && bmi<25)
    {
        printf("Normal weight.");
    }
    else if(bmi>=25 && bmi<30)
    {
        printf("Overweight.");
    }
    else if(bmi>=30)
    {
        printf("Obesity");
    }
    
}