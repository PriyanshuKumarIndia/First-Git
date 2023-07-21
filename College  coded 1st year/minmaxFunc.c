#include<stdio.h>
int min(int store[]);
int max(int store[]);
int main(){
    int store[5],i,mi,ma;
    printf("Enter the numbers : ");
    for(i=0;i<5;i++){
    scanf("%d",&store[i]);
    }
    mi=min(store);
    printf("%d is the minimum number.\n",mi);
    ma=max(store);
    printf("%d is the maximum number.",ma);
}
int min(int store[]){
    int temp=store[0],i;
    for(i=1;i<5;i++){
        if(temp>store[i]){
            temp=store[i];
        }
    }
    return temp;
}
int max(int store[]){
    int temp=store[0],i;
    for(i=1;i<5;i++){
        if(temp<store[i]){
            temp=store[i];
        }
    }
    return temp;
}
