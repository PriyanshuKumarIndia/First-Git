#include <bits/stdc++.h>
using namespace std;

int main(){
    int size=5;
    int arr[]={5,6,7,1,2};
    int count=0;
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]) count++;
    }
    if(arr[size-1]>arr[0]) count++;
    if(count>1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

  return 0;
}