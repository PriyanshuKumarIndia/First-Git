#include<bits/stdc++.h>
using namespace std;

void ToUpper(string& message){
    int count;
    string ch;
    for(int i=0;i<message.length();i=i+1+(ch.length())){
        count=0;
        for(int j=i;j<message.length();j++){
            if(message[i]==message[j]){
                count++;
            }
            else{
                break;
            }
        }
        message.erase(i+1,count-1);
        ch=to_string(count);
        message.insert(i+1,ch);
         
    }
}

int main(){
    string str="aaaaaaaaaaaaaaaaaa";
    ToUpper(str);
    cout<<str;

}