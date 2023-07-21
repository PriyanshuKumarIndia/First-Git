#include<stdio.h>
void avg(int subject);
int main()
{
    int student,subject;
    printf("Enter the number of students : ");
    scanf("%d",&student);
    printf("Enter the number of subjects : ");
    scanf("%d",&subject);
    for(int i=0;i<student;i++)
    {
        avg(subject);
    }
}
void avg(int subject){
    static int count=1;
    float avg,sum=0,temp;
    printf("Enter the marks of student %d :\n",count);
    for(int i=0;i<subject;i++)
    {
        scanf("%f",&temp);
        sum+=temp;
    }
    avg=sum/subject;
    printf("Average of student no. %d is %.2f\n",count,avg);
    count++;
}