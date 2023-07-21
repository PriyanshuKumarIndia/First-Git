#include <stdio.h>
int main()
{
    enum wd {sun,mon,tue,wed,thu,fri,sat};
    enum wd d;
    char s[10];
    d=sun;
    printf("%d",d);
    printf("%s",s);
}