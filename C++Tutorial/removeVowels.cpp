#include<bits/stdc++.h>
using namespace std;
string removeVowels(string inputString) {
    // Write your code here.
    string ans="";
    int size=inputString.length();
    for(int i=0;i<size;i++){
        if(inputString[i]=='a' || inputString[i]=='A' || inputString[i]=='e' || inputString[i]=='E' || inputString[i]=='i' || inputString[i]=='I' || inputString[i]=='o' || inputString[i]=='O' || inputString[i]=='u' || inputString[i]=='U'){
            continue;
        }
        else{
            ans+=inputString[i];
        }
    }
    return ans;
}


int main(){
    string str="aaaaaaaaaaaaaaaaaljfgdkhd    aer";
    cout<<removeVowels(str);
}