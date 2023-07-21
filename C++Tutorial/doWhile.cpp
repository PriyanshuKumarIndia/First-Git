#include<iostream>
using namespace std;
int main (){
    int a,i=1;
    cout<<"Enter the number :";
    cin>>a;
    do{
        cout<<a<<"x"<<i<<"="<<a*i<<endl;
        i++;
    }while(i<11);
}
