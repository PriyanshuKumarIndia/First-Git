#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    while(n>0){
        if(n%2==0) arr.push_back(0);
        else arr.push_back(1);
        n/=2;
    }
    int size=arr.size();
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}