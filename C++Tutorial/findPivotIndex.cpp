#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;
    int arr[size];
    cout<<"Enter elements :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int mid=(size-1)/2,sum1,sum2,i,j,t1=0,t2=0;
    while(true){
        sum1=0;sum2=0;i=mid-1;j=mid+1;
        while(i>=0){
            sum1+=arr[i];
            i--;
        }
        while(j<size){
            sum2+=arr[j];
            j++;
        }
        if(sum1==sum2) break;
        else if(sum1>sum2){
            if((t1==0 && t2==0) || (t1==1 && t2==0)){
                mid--;
                t1=1;t2=0;
            }
            else{
                mid=-1;
                break;
            }
        }
        else{
            if((t1==0 && t2==0) || (t1==0 && t2==1)){
                mid++;
                t1=0;t2=1;
            }
            else{
                mid=-1;
                break;
            }
        }
    }
    cout<<mid;
}