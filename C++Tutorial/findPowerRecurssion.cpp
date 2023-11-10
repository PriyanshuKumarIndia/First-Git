#include<bits/stdc++.h>
using namespace std;

int Power(int num,int n){
    if(n==0) return 1;
    else if(n==1) return num;
    else if(n%2==0) return Power(num,n/2)*Power(num,n/2);
    else if(n%2!=0) return num*Power(num,n/2)*Power(num,n/2);
}

int main(){
    int num=2,n=16;
    cout<<Power(num,n);

}