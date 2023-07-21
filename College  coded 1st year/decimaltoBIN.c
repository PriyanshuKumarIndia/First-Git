#include <stdio.h>
void dtb(int a);
int main(){
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    dtb(a);
}
void dtb(int a){
    int i,ary[10],j;
    for(i=0;a!=0;i++)
    {
        ary[i]=a%2;
        a/=2;
    }
    for(j=(i-1);j>=0;j--){
        printf("%d",ary[j]);
    }
}
//how to get return array from a function