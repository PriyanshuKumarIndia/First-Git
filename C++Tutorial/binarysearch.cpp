#include<iostream>
using namespace std;
int binarysearch(int array[],int low,int high,int search);
int main(){
    int array[5]={1,2,32,45,50},high=5,low=0,search,position;
    cout<<"Enter the element to search : ";
    cin>>search;
    position=binarysearch(array,low,high,search);
    if(position==-5)
    cout<<"Element not present in this array .";
    else
    cout<<"element at position "<<position+1;
}
int binarysearch(int array[],int low,int high,int search){
    int mid;
    if(low<=high){
        mid=(low+high)/2;
        if(array[mid]==search){
            return mid;
        }
         if(array[mid]>search){
           return binarysearch(array,low,mid-1,search);
        }
         if(array[mid]<search){
           return binarysearch(array,mid+1,high,search);
        }
         }
      return -5;
}