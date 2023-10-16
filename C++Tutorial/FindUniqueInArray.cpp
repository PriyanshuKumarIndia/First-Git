#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,ans=0;
    cout<<"Enter the size :";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" Elements :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        ans^=arr[i];
    }
    cout<<endl<<"The unique element is "<<ans<<endl;
}