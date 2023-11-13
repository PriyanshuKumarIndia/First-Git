#include<bits/stdc++.h>
using namespace std;

void solve(string arr,string output,vector<string>& ans,int index){
    if(index >=arr.length()){
		ans.push_back(output);
		return;
	}

    
	output.push_back(arr[index]);
	solve(arr,output,ans,index+1);
	output.pop_back();
	solve(arr,output,ans,index+1);
}

vector<string> powerSet(string arr){
	vector<string> ans;
	string output;
	int index=0;
	solve(arr,output,ans,index);
	return ans;
}

int main(){
	string arr="abc";
	vector<string> ans;
	ans=powerSet(arr);
	int size=ans.size();
	for(int i=0;i<size;i++){
		cout<<ans[i]<<endl;
	}
}