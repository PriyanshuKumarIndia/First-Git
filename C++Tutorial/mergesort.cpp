#include<iostream>
using namespace std;
int b[10];
int merge(int arr[],int lb,int mid,int ub){
   static int i=lb,j=mid+1,k=lb;
   while(i<=mid && j<=ub){
    if(arr[i]<=arr[j]){
        b[k]=arr[i];
        i++;
    }
    else{
        b[k]=arr[j];
        j++;
    }
    k++;
   }
   if(i>mid){
    while(j<=ub){
        b[k]=arr[j];
        j++;k++;
    }
   }
    else{
        while(i<=mid){
            b[k]=arr[i];
            i++;k++;
        }
    }
   
}
int divide(int arr[],int ub,int lb){
    int u=ub,l=lb,mid;
    if(u>l){
    mid=(u+l)/2;
    divide(arr,mid,lb);
    divide(arr,ub,mid+1);
    merge(arr,lb,mid,ub);
    }
}
int main(){
    int arr[10]={78,20,8,45,96,23,45,78,56,4},lb=0,ub=9;
    divide(arr,ub,lb);
    
    cout<<"Displaying new array.\n";
    for(int w=0;w<10;w++){
        cout<<b[w]<<" ";
    }
}