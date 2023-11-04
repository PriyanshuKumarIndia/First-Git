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
    cout<<"Enter the size of the array :"<<endl;
    cin>>size;
    int arr[size],rarr[size];
    cout<<"Enter elements :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        rarr[size-i-1]=arr[i];
    }
    // Normal reversing
    cout<<"Normal and reversed array :"<<endl;
    disp(arr,size);
    disp(rarr,size);

    // // Reverse from any certain position
    cout<<"Enter the position to reverse from :"<<endl;
    int pos;
    cin>>pos;
    int temp=pos;
    for(int i=0;i<size;i++){
        if(i==pos){
            i=size-1;
            while(i>=temp){
                rarr[pos]=arr[i];
                i--;
                pos++;
            }
            break;
        }
        else{
            rarr[i]=arr[i];
        }
    }
    disp(arr,size);
    disp(rarr,size);

    // Normal Reversing using single array
    int i=0,temp1=size-1;
    while(i<temp1){
        swap(arr[i],arr[temp1]);
        temp1--;
        i++;
    }
    disp(arr,size);

    // Reverse from any certain position using single array
    int i=pos,temp2=size-1;
    while(i<temp2){
        swap(arr[i],arr[temp2]);
        temp2--;
        i++;
    }
    disp(arr,size);

  return 0;
}