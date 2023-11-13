#include<bits/stdc++.h>
using namespace std;

void solve(string nums,vector<string> mapping,int index,vector<string>& ans,string output){
    if(index >= nums.length()){
        ans.push_back(output);
        return;
    }

    int number=nums[index]-'0';
    string value=mapping[number];

    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(nums,mapping,index+1,ans,output);
        output.pop_back();
    }
}

vector<string> phoneKeypad(string nums){
    vector<string> mapping={"","","abc","def","ghi","jkl","mno","pqrs","tuv","xyz"};
    int index=0;
    vector<string> ans;
    string output;
    solve(nums,mapping,index,ans,output);
    return ans;
}

int main(){
    string nums="36";
    vector<string> ans;
    ans=phoneKeypad(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

}