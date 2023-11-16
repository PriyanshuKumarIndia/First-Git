#include<bits/stdc++.h>
using namespace std;

void ToUpper(string& str){
    bool flag=true;
    for(int i=0;i<str.length();i++){
        if(flag && islower(str[i])){
            str[i]=toupper(str[i]);
        }
        if(str[i]==' ') flag=true;
        else flag=false;
    }
    // int num=3;
    // string temp=to_string(num);
    // str.insert(3,temp);
    // str.erase(num+1,2);
}

int main(){
    string str="priyanshu is a good boy";
    ToUpper(str);
    cout<<str;

}