#include<bits/stdc++.h>
using namespace std;

int Asum(int arr[],int size){
  if(size ==0) return 0;
  else if(size==1) return arr[0];
  else return arr[0]+Asum(arr+1,size-1);
  
}

int main(){
  int arr[100];
  int size;
  cout<<"Enter the size of the array :"<<endl;
  cin>>size;
  arr[size];
  cout<<"Enter "<<size<<" elements :"<<endl;
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  cout<<"The sum is : "<<Asum(arr,size)<<endl;
}