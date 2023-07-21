#include <stdio.h>
struct boy 
{
    int roll;
    char name[20];
    float marks;
};
void main()
{
    struct boy p={1,"priyanshu",99.99};
    struct boy *ptr=&p;
    printf("%d",(*ptr).roll);
    printf(" %d",ptr->roll);
}