#include<stdio.h>
int check(int a);
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int array[size],temp;
    printf("Enter the elements of array :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
        temp=check(array[i]);
    }
    printf("%d is the largest among these",temp);
}
int check(int a){
    static int count=0;
    if(a>count)
    {
        count=a;
    }
    return count;
}