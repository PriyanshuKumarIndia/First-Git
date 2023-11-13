#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int low,int high);
void display(int arr[],int size);

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void merge(int *arr,int low,int high){
    int mid=low +(high-low)/2;
    int len1=mid-low+1;
    int len2=high-mid;
    int *arr1= new int[len1];
    int *arr2= new int[len2];
    int mainIndex=low;
    for(int i=0;i<len1;i++,mainIndex++){
      arr1[i]=arr[mainIndex];
    }
    for(int i=0;i<len2;i++,mainIndex++){
      arr2[i]=arr[mainIndex];
    }
    mainIndex=low;
    int i=0,j=0;
    while(i<len1 && j<len2){
      if(arr1[i]<arr2[j]){
          arr[mainIndex]=arr1[i];
          i++;
      }
      else if(arr1[i]>arr2[j]){
          arr[mainIndex]=arr2[j];
          j++;
      }
      mainIndex++;
    }
    while(i<len1){
      arr[mainIndex]=arr1[i];
      i++;mainIndex++;
    }
    while(j<len2){
      arr[mainIndex]=arr2[j];
      j++;mainIndex++;
    }

    delete []arr1;
    delete []arr2;
}

void mergeSort(int arr[],int low,int high){
    if(low>=high) return;
    int mid=low + (high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,high);
}

int main(){
  int size=5;
  int arr[]={1,20,6,4,5};
  mergeSort(arr,0,size-1);
  display(arr,size);
}