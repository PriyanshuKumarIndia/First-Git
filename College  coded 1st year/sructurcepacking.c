#include <stdio.h>
#pragma pack(1)
struct by
{
    char c;
    int a;
    
};
void main()
{
    struct by bro;
    printf("%d",sizeof(bro));
}