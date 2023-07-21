#include <stdio.h>
struct stu 
{
    int roll;
    char name[20];
    float marks;
};
void main()
{
    int i,j;
    printf("How many students of data you want :");
    scanf("%d",&j);
    struct stu p[j];
    for(i=1;i<=j;i++)
    {
    printf("information for student number %d\n",i);
    printf("Enter the roll number : ");
    scanf("%d",&p[i].roll);
    printf("Enter the name : ");
    scanf("%s",p[i].name);
    printf("Enter the marks : ");
    scanf("%f",&p[i].marks);
    }
    for(i=1;i<=j;i++)
    {
    printf("information of student %d\n",i);
    printf("the roll number : %d\n",p[i].roll);
    printf("Enter the name : %s\n",p[i].name);
    printf("Enter the marks : %f\n",p[i].marks);
    }
    printf("The roll number of student number 4 is %d",p[4].roll);
}