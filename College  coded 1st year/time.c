#include<stdio.h>
#include<time.h>

int main()
{
    time_t t=time(NULL);
    printf("Time %s",ctime(&t));
}