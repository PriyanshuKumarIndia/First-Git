#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
      if(s.length()%2!=0) return false;
      for(int i=0;i<s.length();i++){
        char temp;
        if(i%2==0){
          if(s[i]==')' || s[i]=='}' || s[i]==']') return false;
          else temp=s[i];
        }
        else{
          if(temp=='(' && s[i]!=')') return false;
          else if(temp=='[' && s[i]!=']') return false;
          else if(temp=='{' && s[i]!='}') return false;
        }
      }
      return true;
        
    }
};


int main(){
    bool ans;
    Solution obj;
    string s;
    cin>>s;
    ans=obj.isValid(s);
    cout<<ans;
}