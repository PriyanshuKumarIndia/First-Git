#include<bits/stdc++.h>
using namespace std;

string Reverse(string str, int low, int high){
    if(low>=high) return str;
    else{
      swap(str[low],str[high]);
      return Reverse(str,low+1,high-1);
    }
}

int main(){
  string str="Priyanshu";
  int low=0,high=str.length();
  cout<<Reverse(str,low,high-1);
}