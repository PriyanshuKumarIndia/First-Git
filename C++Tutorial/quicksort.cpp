#include<bits/stdc++.h>
using namespace std;
int partition(int array[],int lb,int ub){
    int p=array[lb],start=lb,end=ub;
    while(lb<ub){
        while(array[start]<=p){
            start++;
        }
        while(array[end]>p){
            end--;
        }
        if(start<end){
            swap(array[start],array[end]);
        }
    }
    swap(array[lb],array[end]);
     return end;
}
int quicksort(int array[],int lb,int ub){
    int pos;
    if(lb<ub){
        pos=partition(array,lb,ub);
        quicksort(array,lb,pos-1);
        quicksort(array,pos+1,ub);
    }
}
void display(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    int array[]={12,45,78,34,56,90,65,43},lb=0,ub=7;
    display(array,8);
    quicksort(array,lb,ub);
    cout<<"\nFunction called !"<<endl;
    display(array,8);
}