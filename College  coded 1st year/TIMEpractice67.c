#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int CA(int ha,int ma)
{
    
    if(ha==12)
    ha=0;
    if(ma==0)
    ma=0;
    int han=(0.5*(ha*60+ma));
    int man=(6*ma);

    int angle=abs(han-man);
    int ang=(360-angle);
    return (ang>angle)?angle:ang;
}
int main()
{
    float ha=9,ma=33;
    printf("%d is angle",CA(ha,ma));
}