#include<bits/stdc++.h>
using namespace std;

bool Palindrone(string str,int low,int high){
    if(low>=high) return 1;

    if(str[low]!=str[high]) return 0;
    else return Palindrone(str,low+1,high-1);
}

int main(){
  string str="adda";
  int low=0,high=str.length();
  cout<<Palindrone(str,low,high-1);
}