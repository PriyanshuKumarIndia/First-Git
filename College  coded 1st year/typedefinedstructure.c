#include <stdio.h>
struct boy 
{
    int roll;
    char name[20];
    float marks;
};
//typedef struct boy bro; //typedef is used for giving alias to any datatype or any other things to call it easily
void main()
{
    typedef struct boy bro;
    struct boy p={1,"priyanshu",99.99};
    bro *ptr=&p;
    printf("%d",(*ptr).roll);
    printf(" %d",ptr->roll);
}