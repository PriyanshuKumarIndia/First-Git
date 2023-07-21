#include <stdio.h>
int main()
{
    float f,c;
    int i;
    printf("fahrenheit\tcelcius\n");
    for(i=0;i<=150;i+=10)
    {
        f=(float)(i*9/5)+32;
        printf("%d\t%.1f\n",i,f);
    }
    printf("celcius\tfahrenheit\n");
    for(i=0;i<=150;i+=10)
    {
        c=(float)(i-32)*5/9;
        printf("%d\t%.1f\n",i,c);
    }
}