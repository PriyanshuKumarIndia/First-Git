#include<stdio.h>
int findlarge(int a[]);
int main(){
    int a[5],i,largest,*p;
    printf("Enter the numbers : ");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    p=a;
    largest=findlarge(a);
    printf("Largest among these is %d",largest);
}
int findlarge(int a[])
{
    int temp=a[0],i;
    for(i=1;i<5;i++)
    {
        if(a[i]>temp){
            temp=a[i];
        }
    }
    return temp;
}