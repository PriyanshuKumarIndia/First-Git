#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> arr,vector<int> output,vector<vector<int>>& ans,int index){
    if(index >=arr.size()){
		ans.push_back(output);
		return;
	}

    
	output.push_back(arr[index]);
	solve(arr,output,ans,index+1);
	output.pop_back();
	solve(arr,output,ans,index+1);
}

vector<vector<int>> powerSet(vector<int> arr){
	vector<vector<int>> ans;
	vector<int> output;
	int index=0;
	solve(arr,output,ans,index);
	return ans;
}

int main(){
	vector<int> arr={1,2,3};
	vector<vector<int>> ans;
	ans=powerSet(arr);
	int size=ans.size();
	for(int i=0;i<size;i++){
		cout<<"[";
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<",";
		}cout<<"]"<<endl;
	}
}