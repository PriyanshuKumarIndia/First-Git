#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size],search;
    cout<<"Enter "<<size<<" Elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to search : ";
    cin>>search;
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==search){
            cout<<"Element found at position "<<(i+1)<<endl;
            count++;
            break;
        }
    }
    if(count==0)
    cout<<"Element not found"<<endl;
    int j,key;
     for(int i=1;i<size;i++){
        key=arr[i];
        j=i-1;
        while(j >= 0 && arr[j] > key){
                arr[j+1]=arr[j];
                j--;
        }
        arr[j+1]=key;
    }
    cout<<"Here is the sorted array : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}