#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int low=0,high=size-1;
    int mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==key) return mid;
        else if(key>arr[mid]){
            low=mid+1;
        }
        else if(key<arr[mid]) high=mid-1;
        mid=(low+high)/2;
    }
    return -1;
}
int main(){
    int arr[]={1,1,1,5,5,5,5,5,5,5,7,7,7,7,7,9,9,9,11,11};
    int size=20,key=10;
    int temp=binarySearch(arr,size,key);
    int first=temp,last=temp,count;
    while(true){
        count=0;
        if(arr[first-1]==arr[first]){
            first--;
            count++;
        }
        if(arr[last]==arr[last+1]){
            last++;
            count++;
        }
        if(count==0) break;
    }
    cout<<first<<" and "<<last<<endl;
    cout<<"Total number of occurence is "<<last-first+1;
}