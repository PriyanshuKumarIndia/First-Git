#include <bits/stdc++.h>
using namespace std;

string revWords(string str){
    int i=0,j=0,temp;
    while(str[j]!=' ') j++;
    temp=j;
    j--;
    while(j>i){
                swap(str[i],str[j]);
                i++;j--;
            }
    for(i=temp;i<str.length();i++){
        if(str[i]==' ' && i!=0){
            int j=i+1;
            while(str[j]!=' '){
                j++;
                if(j==str.length()) break;
            }
            i++;j--;
            while(j>i){
                swap(str[i],str[j]);
                i++;j--;
            }
        }
    }
    return str;
}

int main(){
    string str="My name is Priyanshu Kumar";
    cout<<"String without reversed :"<<endl<<str<<endl;
    str=revWords(str);
    cout<<"String after reversed :"<<endl<<str<<endl;

  return 0;
}