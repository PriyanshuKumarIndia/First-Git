#include <bits/stdc++.h>
using namespace std;

void disp(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size1,size2,size;
    cout<<"Size of first array :"<<endl;
    cin>>size1;
    int arr1[size1];
    cout<<"Enter "<<size1<<" elements :"<<endl;
    for(int x=0;x<size1;x++){
        cin>>arr1[x];
    }
    cout<<"Size of Second array :"<<endl;
    cin>>size2;
    int arr2[size2];
    cout<<"Enter "<<size2<<" elements :"<<endl;
    for(int x=0;x<size2;x++){
        cin>>arr2[x];
    }
    if(size1>size2) size=size1;
    else size=size2;
    vector<int> ans(size+1,0);
    int i=size1-1,j=size2-1,k=size;
    int num,rem=0,temp;
    while(k>=0){
        num=arr1[i]+arr2[j];
        temp=num+rem;
        ans[k]=temp%10;
        rem=temp/10;
        cout<<"rem = "<<rem<<endl;
        i--;j--;k--;
        if(i==-1){
            while(j>=0){
                temp=arr2[j]+rem;
                ans[k]=temp%10;
                rem=temp/10;
                k--;j--;
                cout<<"rem1 = "<<rem<<endl;
            }
            ans[k]=rem;
            k--;
        }
        else if(j==-1){
            while(i>=0){
                temp=arr1[i]+rem;
                ans[k]=temp%10;
                rem=temp/10;
                cout<<"rem2 = "<<rem<<endl;
                k--;i--;
            }
            ans[k]=rem;
            k--;
        }
    }
    disp(ans);

  return 0;
}