#include<iostream>
using namespace std;
int merge(int array[],int l,int mid,int u){
    int size1=mid-l+1,size2=u-mid,i,j,k;
    int temp1[size1],temp2[size2];
    for(i=0;i<size1;i++){
        temp1[i]=array[l+i];
    }
    for(int i=0;i<size1;i++){
        temp2[i]=array[mid+1+i];
    }
    i=0;j=0;k=l;
    while (i < size1 && j < size2)
    {
        if (temp1[i] < temp2[j])
        {
            array[k] = temp1[i];
            k++;
            i++;
        }
        else
        {
            array[k] = temp2[j];
            k++;
            j++;
        }
    }
    while (i < size1)
    {
        array[k] = temp1[i];
        k++;
        i++;
    }
    while (j < size2)
    {
        array[k] = temp2[j];
        k++;
        j++;
    }
}
int mergesort(int array[],int l,int u){
    int mid;
    if(l<u){
        mid=(l+u)/2;
        mergesort(array,l,mid);
        mergesort(array,mid+1,u);
        merge(array,l,mid,u);
    }
}
void display(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    printf("Enter %d elements :\n",size);
    int array[size],i,l=0,u=size-1;
    for(i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Array before sorting :\n";
    display(array,size);
    mergesort(array,l,u);
    cout<<"\nArray after sorting :\n";
    display(array,size);
    cout<<"\n:)";
}