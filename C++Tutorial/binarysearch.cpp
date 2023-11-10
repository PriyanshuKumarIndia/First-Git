#include<iostream>
using namespace std;
int binarySearch(int array[],int low,int high,int search);
int main(){
    int array[5]={1,2,32,45,50},high=4,low=0,search,position;
    cout<<"Enter the element to search : ";
    cin>>search;
    position=binarySearch(array,low,high,search);
    if(position==-5)
    cout<<"Element not present in this array .";
    else
    cout<<"element at position "<<position+1;
}
int binarySearch(int arr[],int low,int high,int key)
{
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(arr[mid]==key) return mid;
    else if(arr[mid]>key) binarySearch(arr,low,mid-1,key);
    else binarySearch(arr,mid+1,high,key);
}
