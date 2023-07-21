#include <stdio.h>
int main()
{
    int th,h,f,t,te,fi,tw,o,sum,amt;
    printf("Enter the amount : ");
    scanf("%d",&amt);
    if(amt>=500)
    {
        th=amt/500;
        printf("%d Five Hundred rupees note(s).\n",th);
        amt=amt%500;
    }
    if(amt>=100 && amt<500)
    {
        h=amt/100;
        printf("%d Hundred rupees note(s).\n",h);
        amt=amt%100;
    }
    if(amt>=50 && amt<100)
    {
        f=amt/50;
        printf("%d fifty rupees note(s).\n",f);
        amt=amt%50;
    }
    if(amt>=20 && amt<50)
    {
        t=amt/20;
        printf("%d twenty rupees note(s).\n",t);
        amt=amt%20;
    }
    if(amt>=10 && amt<20)
    {
        te=amt/10;
        printf("%d ten rupees note(s).\n",te);
        amt=amt%10;
    }
    if(amt>=5 && amt<10)
    {
        fi=amt/5;
        printf("%d five rupees note(s).\n",fi);
        amt=amt%5;
    }
    if(amt>=2 && amt<5)
    {
        tw=amt/2;
        printf("%d two rupees coin(s).\n",tw);
        amt=amt%2;
    }
    if(amt>=1 && amt<2)
    {
        printf("%d one rupee coin(s).",amt);
    }
}