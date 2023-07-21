#include<stdio.h>
void armstrong(int a);
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    armstrong(num);
}
void armstrong(int a){
    int check,sum=0,temp;
    temp=a;
    for(int i=0;temp!=0;i++){
        check=temp%10;
        temp/=10;
        sum+=(check*check*check);
    }
    if(sum==a){
        printf("%d is armstrong number.",a);
    }
    else{
        printf("%d is not armstrong number.",a);
    }
}