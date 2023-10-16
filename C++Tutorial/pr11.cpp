#include <bits/stdc++.h>
using namespace std;

void disp(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  int size;
  cout<<"Enter the size :"<<endl;
  cin>>size;
  int arr[size];
  cout<<"Enter the elements :"<<endl;
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
    disp(arr,size);
    for(int i=0;i<size;i++){
      int temp=i;
      for(int j=i+1;j<size;j++){
        if(arr[j]<arr[temp]){
          temp=j;
        }
      }
      swap(arr[i],arr[temp]);
      disp(arr,size);
    }
}