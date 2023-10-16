#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,k=0,product;
    cin>>size;
    int arr[size],temp[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        product=1;
        for(int j=0;j<size;j++){
            if(j==i) continue;
            product*=arr[j];
        }
        temp[k]=product;
        k++;
    }
    for(int i=0;i<size;i++){
        cout<<temp[i]<<endl;
    }
}