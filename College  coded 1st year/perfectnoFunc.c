#include<stdio.h>
int perfect(int a);
int main(){
    int l,h,i;
    printf("Enter lower value : ");
    scanf("%d",&l);
    printf("Enter higher value : ");
    scanf("%d",&h);
    for(i=l;i<=h;i++){
    perfect(i);
    }
    printf("Are perfect numbers.");
}
int perfect(int a){
    int i,sum=0;
    for(i=1;i<=a/2;i++){
        if(a%i==0){
            sum+=i;
        }
    }
    if(sum==a){
        printf("%d ",a);
    }
}