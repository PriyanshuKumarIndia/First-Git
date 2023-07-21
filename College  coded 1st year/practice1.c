#include <stdio.h>
int main()
{
    int i,j,k;
    //printing of letter F.
    for(i=0;i<7;i++)
    {
        if(i==0)
        {
        for(j=0;j<6;j++)
        {
            printf("#");
        }
        printf("\n");
        }
        if(i==1 || i==2 || i==4 || i==5 || i==6)
        {
            printf("#\n");
        }
        if(i==3)
        {
            for(j=0;j<5;j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    for(i=0;i<9;i++)
    {
        if(i==0 || i==8)
        {
            printf("\t");
            for(j=0;j<6;j++)
            {
                printf("#");
            }
            printf("\n");
        }
        if(i==1 || i==7)
        {
            printf(" ");
            for(k=0;k<2;k++)
            {
                printf("##\t\t");
            }
            printf("\n");
        }
        if(i==2 || i==3 || i==4 || i==5 || i==6)
        {
            printf("#\n");
        }
    }
}