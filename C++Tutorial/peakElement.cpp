#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;
    int arr[size];
    cout<<"Enter elements :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int mid=(size-1)/2;
    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) cout<<arr[mid];
    else if(arr[mid]>arr[mid-1]){
        while(arr[mid]<arr[mid+1]){
            mid++;
        }
        cout<<arr[mid];
    }
    else if(arr[mid]>arr[mid+1]){
        while(arr[mid]<arr[mid-1]){
            mid--;
        }
        cout<<arr[mid];
    }
    
}