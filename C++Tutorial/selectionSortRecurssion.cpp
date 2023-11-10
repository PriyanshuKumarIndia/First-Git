#include<bits/stdc++.h>
using namespace std;

int minIndex(int arr[],int size){
     int min=0;
     for(int i=1;i<size;i++){
        if(arr[i]<arr[min]) min=i;
     }
     return min;
}

void display(int arr[],int size){
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }cout<<endl;
}

void selectionSort(int arr[],int size){
    if(size==1) return;
    swap(arr[0],arr[minIndex(arr,size)]);
    selectionSort(arr+1,size-1);
}



int main(){
  int size=5;
  int arr[size]={1,0,34,5,6};
  cout<<"Array before :"<<endl;
  display(arr,size);
  selectionSort(arr,size);
  cout<<"Array after :"<<endl;
  display(arr,size);
}