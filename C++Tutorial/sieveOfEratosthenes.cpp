#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    int arr[num]={0};
    arr[0]=arr[1]=1;
    for(int i=2;i<num;i++){
        if(arr[i]==0){
            int sum=2*i;
            while(sum<=num){
                arr[sum]=1;
                sum+=i;
            }
        }
    }
    for(int i=0;i<num;i++){
        if(arr[i]==0){
            cout<<i<<" ";
        }
    }

}