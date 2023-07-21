#include<iostream>
using namespace std;

int main (){
    int loop;
    cout<<"Enter 1 for 'FOR' Loop"<<endl;
    cout<<"Enter 2 for 'While' Loop"<<endl;
    cout<<"Enter 3 for 'Do While' Loop"<<endl;
    cout<<"Enter Choice "<<endl;
    cin>>loop;
    switch (loop){
    case 1:{
    int a;
    cout<<"Enter the number :";
    cin>>a;
    for(int i=1;i<11;i++){
        cout<<a<<"x"<<i<<"="<<a*i<<endl;
    }
    break;
    }
    case 2:{
    int a,i=1;
    cout<<"Enter the number :";
    cin>>a;
    while(i<11){
        cout<<a<<"x"<<i<<"="<<a*i<<endl;
        i++;
    }
    break;
    }
    case 3:{
    int a,i=1;
    cout<<"Enter the number :";
    cin>>a;
    do{
        cout<<a<<"x"<<i<<"="<<a*i<<endl;
        i++;
    }while(i<11);
    break;
    }
    default:
    cout<<"Invalid Choice";
    }
}