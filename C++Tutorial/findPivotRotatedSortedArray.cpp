#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size];
    cout<<"Enter elements :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int low=0,high=size-1;
    int mid=(low+high)/2;
    while(low<high){
        if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]){
            break;
        }
        else if(arr[mid]>arr[0]){
            low=mid+1;
        }
        else high=mid;
        mid=(low+high)/2;
    }
    cout<<arr[mid];

  return 0;
}