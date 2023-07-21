#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int array[size],i,temp,j;
    cout<<"Enter elements : "<<endl;
    for(i=0;i<size;i++){
        cin>>array[i];
    }
    for(i=0;i<size;i++){
        for(j=i;j<size;j++){
            if(array[i]>array[j]){
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    cout<<"Here is the sorted array : "<<endl;
    for(i=0;i<size;i++){
        cout<<array[i]<<"  ";
    }
}