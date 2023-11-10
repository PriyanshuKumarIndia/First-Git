#include<bits/stdc++.h>
using namespace std;

bool LinearSearch(int arr[],int size,int key){
    if(size==0) return 0;

    else if(arr[0]==key) return 1;
    else return LinearSearch(arr+1,size-1,key);
}

int main(){
  int arr[]={1,2,3,4,5},size=5,key=3;
  cout<<LinearSearch(arr,size,key);
}