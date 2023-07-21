#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int array[size],i,key,j;
    cout<<"Enter "<<size<<" elements "<<endl;
    for(i=0;i<size;i++)
    cin>>array[i];
    for(int i=1;i<size;i++){
        key=array[i];
        j=i-1;
        while(j >= 0 && array[j] > key){
                array[j+1]=array[j];
                j--;
        }
        array[j+1]=key;
    }
    cout<<"Insertion sorting successfull!"<<endl;
    cout<<"Here is the sorted array :\n";
    for(i=0;i<size;i++){
        cout<<array[i]<<"  ";
    }
}