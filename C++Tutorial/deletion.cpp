#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int array[size],position,i;
    for(i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Enter the position to be deleted : ";
    cin>>position;
    for(i=(position-1);i<(size-1);i++){
        array[i]=array[i+1];
    }
    size--;
    cout<<"Final array :"<<endl;
    for(i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}