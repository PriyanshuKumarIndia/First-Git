#include<bits/stdc++.h>
using namespace std;

int Distinct(int *arr){
    int count=0;
    for(int i=0;i<26;i++){
        if(arr[i]) count++;
    }
    return count;
}

int longestSub(string str,int k){
    int arr[26]={0},Maxm=INT_MIN,j=0;
    for(int i=0;i<str.length();i++){
        arr[str[i]-'a']++;
        while(Distinct(arr)>k){
            arr[str[j]-'a']--;
            j++;
        }
        Maxm=max(Maxm,i-j+1);
    }
    return Maxm;
}

int main(){
    string str="abcba";
    cout<<longestSub(str,6);
}