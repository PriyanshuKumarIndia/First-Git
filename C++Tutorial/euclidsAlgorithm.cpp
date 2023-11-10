#include<bits/stdc++.h>
using namespace std;

int GCD(int num1,int num2){
    if(num1==0) return num2;
    if(num2==0) return num1;
    if(num1>num2) GCD(num1-num2,num2);
    else GCD(num2-num1,num1);
}

int main(){
    int num1,num2;
    cout<<"Enter the numbers :"<<endl;
    cin>>num1>>num2;
    cout<<GCD(num1,num2)<<endl;

}