#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    float c;
    FILE *p=NULL;
    p=fopen("random.dat","w");
    if(p==NULL)
    {
        printf("Error 404!");
        exit (1);
    }
    fprintf(p,"50\n");
    for(i=1;i<=50;i++)
    {
        double d=i;
         fprintf(p,"%f\n",d/2.e2); 
    }
    printf("Sucessful!");
    fclose(p);
    printf("\n%lf",2.e3);
}