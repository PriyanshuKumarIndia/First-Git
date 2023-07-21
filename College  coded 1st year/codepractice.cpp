#include<iostream>
using namespace std;
int main(){
    cout<<"Hello world!"<<endl;
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    for(int i=1;i<11;i++){
        printf("%d x %d = %d\n",a,i,a*i);
    }
}