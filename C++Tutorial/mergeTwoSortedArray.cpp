#include <bits/stdc++.h>
using namespace std;

void disp(int arr[],int size);

int main(){
    int size1,size2;
    cout<<"Enter size of both the array :"<<endl;
    cin>>size1>>size2;
    int arr1[size1],arr2[size2],marr[size1+size2];
    cout<<"Enter "<<size1<<" Elements for the first array :"<<endl;
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter "<<size2<<" Elements for the second array :"<<endl;
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    int i=0,j=0,k=0;
    while(i<(size1+size2)){
        if(arr1[j]<arr2[k]){
            marr[i]=arr1[j];
            i++;j++;
        }
        else{
            marr[i]=arr2[k];
            i++;k++;
        }
        if(j==size1){
            while(k < size2){
                marr[i]=arr2[k];
                k++;i++;
            }
        }
        if(k==size2){
            while(j < size1){
                marr[i]=arr1[j];
                j++;i++;
            }
        }
    }
    disp(marr,(size1+size2));

  return 0;
}


void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}