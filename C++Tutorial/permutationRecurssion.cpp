#include<bits/stdc++.h>
using namespace std;

void solve(string str,vector<string>& ans,int index){
    if(index>=str.length()){
        ans.push_back(str);
        return;
    }

    for(int i=index;i<str.length();i++){
        swap(str[i],str[index]);
        solve(str,ans,index+1);
        swap(str[i],str[index]);
    }
}

vector<string> PS(string str){
    vector<string> ans;
    int index=0;
    solve(str,ans,index);
    return ans;
}

int main(){
    string str="abc";
    vector<string> ans;
    ans= PS(str);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

}