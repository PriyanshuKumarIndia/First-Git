#include <bits/stdc++.h>
using namespace std;

char maxFre(string s){
    int arr[26]={0},temp;
    for(int i=0;i<s.length();i++){
        temp=s[i]-'a';
        arr[temp]++;
    }
    int max=0;
    char ch;
    for(int i=0;i<26;i++){
        if(arr[i]>max){
            max=arr[i];
            ch='a'+i;
        }
    }
    return ch;
}

int main(){
    string str;
    cout<<"Enter the String :"<<endl;
    cin>>str;
    cout<<maxFre(str);

  return 0;
}