#include <bits/stdc++.h>
using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int nums1[]={},m=0,nums2[]={1},n=1;
    int i,j,temp=m+n;
    for(j=0;j<n;j++){
        i=m-1;
    while(nums1[i]>nums2[j]){
        nums1[i+1]=nums1[i];
        i--;
    }
    nums1[i+1]=nums2[j];
    m++;
    }
    disp(nums1,temp);

  return 0;
}