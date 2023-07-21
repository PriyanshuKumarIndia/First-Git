#include<iostream>
using namespace std;
int main()
{
    int arr[50], i, elem, pos, k;
    cout<<"Enter the Size for Array: ";
    cin>>k;
    cout<<"Enter "<<k<<" Array Elements: ";
    for(i=0; i<k; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";
    cin>>elem;
    cout<<"At What Position ? ";
    cin>>pos;
    for(i=k; i>=pos; i--)
        arr[i] = arr[i-1];
    arr[i] = elem;
    k++;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<k; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}