#include<bits/stdc++.h>
using namespace std;

int minimumParentheses(string pattern) {
    // Write your code here.
    // pattern is the given string.
    vector<char> ch;
    int size=pattern.length();
    for(int i=0;i<size;i++){
        if(i==0 || pattern[i]=='(' || (pattern[i]==')' && ch.back()!='(')){
            ch.push_back(pattern[i]);
        }
        else ch.pop_back();
    }
    return ch.size();
}

int main(){
    string ch=")((()";
    cout<<minimumParentheses(ch);

}