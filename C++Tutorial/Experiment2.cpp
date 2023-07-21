#include<bits/stdc++.h>
using namespace std;
int main()
{
   int size;
   cout<<"Enter the size of the array : ";
   cin>>size;
   int arr[size];
   printf("Enter %d elements :\n",size);
   for(int i=0;i<size;i++){
      cin>>arr[i];
   }
   for(int i=0;i<size;i++){
      for(int j=0;j<5;j++){
         if(arr[j]>arr[j+1]){
            int temp;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
      }
   }
   cout<<"Here is the sorted array :"<<endl;
   for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";
   }
}