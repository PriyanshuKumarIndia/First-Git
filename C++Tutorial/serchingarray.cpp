#include<iostream>
using namespace std;
int main()
{
    int array[5],i,search,count=0;
    cout<<"Enter 5 elements : "<<endl;
    for(i=0;i<5;i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the element to search : ";
    cin>>search;
    for(i=0;i<5;i++)
    {
        if(search==array[i])
        {
            cout<<"Element is at position "<<i+1<<endl;
            count++;
            break;
        }
    }
    if(count==0){
        cout<<"Element not found.";
    }
    else
    cout<<"Searching successfull!";
}