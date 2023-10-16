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
    cout<<"Array before sorting :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl<<"Array after sorting :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
  return 0;
}