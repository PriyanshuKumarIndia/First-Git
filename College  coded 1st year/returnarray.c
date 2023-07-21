#include<stdio.h>
int readarray(int *p);
int printarray(int *p);
int main()
{
    int arr[5];
    printf("Enter the elements of array :\n");
    readarray(arr);
    printarray(arr);
    for(int i=0;i<5;i++){
        printf("%d  ",arr[i]);
    }
}
int readarray(int *p)
{
    for(int i=0;i<5;i++){
        scanf("%d",(p+i));
    }
}
int printarray(int *p)
{
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
    }
}