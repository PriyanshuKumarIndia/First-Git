#include <bits/stdc++.h>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={0,1,0,3,12,0};
    int size=6,count=0;
    cout<<"Before moving :"<<endl;
    disp(arr,size);
    for(int i=0;i<size;i++){
        if(arr[i]==0) count++;
    }
    int j=0,temp;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=size-count;i<size;i++){
        arr[i]=0;
    }
    cout<<"After moving :"<<endl;
    disp(arr,size);

  return 0;
}