#include <stdio.h>
#include <string.h>
int main()
{
    char name[30],dob[30],mob[20];
    printf("Enter name : ");
    gets(name);
    printf("Enter D.O.B : ");
    gets(dob);
    printf("Enter Indian mobile number : ");
    gets(mob);
    printf("Name : %s",name);
    printf("\nD.O.B : %s",dob);
    printf("\nMobile : +91-%s",mob);
}