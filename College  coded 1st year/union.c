#include <stdio.h>
union br
{
    char c;
    int a;
    float b;
};
void main()
{
  union br dop;
  printf("%d\n",sizeof(union br));
  dop.c=97;
  dop.a=89;
  dop.b=43.25;
  printf("%d\n",dop.a); 
  printf("%f\n",dop.b); 
  printf("%c",dop.c);
}