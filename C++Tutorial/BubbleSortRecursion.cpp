#include<bits/stdc++.h>
using namespace std;

void display(int*,int);

void Swap(int arr[],int size){
  if(size==1) return;
  if(arr[0]>arr[1]){
    swap(arr[0],arr[1]);
  }
  Swap(arr+1,size-1);
}

void BubbleSort(int arr[],int size){
    if(size==1) return;
    Swap(arr,size);
    BubbleSort(arr,size-1);
}

void display(int arr[],int size){
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int size =5;
    int arr[size]={2,3,5,1,4};
    BubbleSort(arr,size);
    display(arr,size);

}