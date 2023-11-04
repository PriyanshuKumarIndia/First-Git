#include <bits/stdc++.h>
using namespace std;

string rSS(string str,string str1){
    while(str.length()!=0 && str.find(str1)<str.length()){
      str.erase(str.find(str1),str1.length());
    }
    return str;
}

int main(){
    string str1,str;
    cout<<"Enter the string :"<<endl;
    cin>>str;
    cout<<"Enter the substring :"<<endl;
    cin>>str1;
    str=rSS(str,str1);
    cout<<"Final string "<<endl<<str;
    
  return 0;
}