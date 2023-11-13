#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

int CPos(int arr[],int low,int high){
    int size=high-low+1;
    if(size<=1) return low;
    int key=arr[low];
    int i=low+1,j=high;

	while(true){
		while(arr[i]<key) i++;
		while(arr[j]>key) j--;
		if(i>j){
			swap(arr[low],arr[j]);
			break;
		}
		else{
			swap(arr[i],arr[j]);
			i++;j--;
		}
	}
    return j;
}

void quickSort(int arr[],int low,int high){
      if(low>=high){
        return;
      }

      int Index;
      Index=CPos(arr,low,high);
      quickSort(arr,low,Index-1);
      quickSort(arr,Index+1,high);
      return;

}

int main(){
	int size=8;
	int arr[]={14,18,23,78,45,479,145,54685};
    int low=0,high=size-1;
	cout<<"Before :"<<endl;
	display(arr,size);
    quickSort(arr,low,high);
    cout<<"After :"<<endl;
    display(arr,size);
}