#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6};
    int *p,*q,i;
    p=a;
    q=&a[0]+3;
    printf("%d\n",*(p));
    printf("%d %d %d\n",(*p)++,(*p)++,*(++p));
    printf("%d\n",*p);
    printf("%d\n",(*p)++);
    printf("%d\n",(*p)++);
    q--;
    printf("%d\n",*q);
    printf("%d\n",(*(q+2))--);
    printf("%d\n",*q);
    printf("%d\n",*(p+2)-2);
    printf("%d\n",*(p++ -2)-1);
    printf("%d",*p);
    printf("%d\n",*q);
   /* printf("%d\n",a[1]);
    printf("%d\n",a[3]);*/
    for(i=0;i<6;i++)
    {
        printf("%d\t",a[i]);
    }
}