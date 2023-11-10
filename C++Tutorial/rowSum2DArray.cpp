#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter no. of rows and column :"<<endl;
    cin>>row>>col;
    int arr[row][col],rows[row]={0},cols[col]={0};
    cout<<"Enter "<<row*col<<" elements :"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
            rows[i]+=arr[i][j];
            cols[j]+=arr[i][j];
        }
    }
    cout<<"Sum of rows are :"<<endl;
    for(int i=0;i<row;i++){
        cout<<rows[i]<<endl;
    }
    cout<<"Sum of columns are :"<<endl;
    for(int i=0;i<col;i++){
        cout<<cols[i]<<" ";
    }

}