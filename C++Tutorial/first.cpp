#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=90;
    if(a==90){
        cout<<setw(5)<<a<<endl;//setw() is used for giving number of space *NEW*.
        a++;
    }
    cout<<a;
}