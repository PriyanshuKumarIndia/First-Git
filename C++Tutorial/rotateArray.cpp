#include<bits/stdc++.h>
using namespace std;

// Can also be done by mod (size+k)%size

int rotate(int arr[],int size){
    int temp=arr[0];
    for(int i=1;i<size;i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
}

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size;
    cout<<"Enter the size of the array : "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" Elements :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k=3;
    disp(arr,size);
    for(int i=0;i<k;i++){
    rotate(arr,size);
    disp(arr,size);
    }
}

 