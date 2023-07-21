#include<iostream>
using namespace std;
int main(){
   int array[10],i,j,position,size,temp;
   cout<<"Enter the size of the array : ";
   cin>>size;
   for(i=0;i<size;i++){
      cin>>array[i];
   }
   cout<<"Enter the position : ";
   cin>>position;
   cout<<"Enter the element to insert : ";
   cin>>temp;
   if(position>(size+1) || position<=0){
      cout<<"Invalid Insertion";
      return 0;
   }
   else if(position==(size+1)){
      array[size]=temp;
      size++;
   }
   else{
   for(i=size;i>=position;i--){
      array[i]=array[i-1];
   }
   array[i]=temp;
   size++;
   }
   for(j=0;j<size;j++){
      cout<<array[j]<<" ";
   }
   
}