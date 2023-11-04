#include <bits/stdc++.h>
using namespace std;

int Size(string);

bool palindrome(string str){
    int size;
    size=str.length();
    for(int i=0;i<size/2;i++){
        if(str[i]!=str[size-1-i]) return false;
    }
    return true;
}

int main(){
    string str;
    cout<<"Enter the string :"<<endl;
    cin>>str;
    if(palindrome(str)){
        cout<<str<<" is palindrome."<<endl;
    }
    else cout<<str<<" is not palindrome."<<endl;

  return 0;
}