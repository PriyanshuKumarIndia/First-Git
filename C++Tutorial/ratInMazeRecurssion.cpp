#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> visited,int x,int y,vector<vector<int>> maze,int size){
    if((x>=0 && x< size) && ((y>=0 && y< size)) && (visited[x][y]==0) && (maze[x][y]==1)) return true;
    else return false;
}

void solve(vector<vector<int>> maze,int size,vector<string>& ans,string path,int x,int y,vector<vector<int>> visited){
    if(x==size-1 && y==size-1){
        ans.push_back(path);
        return;
    }
    visited[x][y]=1;

    int newx = x+1;
    int newy = y;
    if(isSafe(visited,newx,newy,maze,size)){
        path.push_back('D');
        solve(maze,size,ans,path,newx,newy,visited);
        path.pop_back();
    }

    newx=x;
    newy=y+1;
    if(isSafe(visited,newx,newy,maze,size)){
        path.push_back('R');
        solve(maze,size,ans,path,newx,newy,visited);
        path.pop_back();
    }

    newx=x;
    newy=y-1;
    if(isSafe(visited,newx,newy,maze,size)){
        path.push_back('L');
        solve(maze,size,ans,path,newx,newy,visited);
        path.pop_back();
    }

    newx=x-1;
    newy=y;
    if(isSafe(visited,newx,newy,maze,size)){
        path.push_back('U');
        solve(maze,size,ans,path,newx,newy,visited);
        path.pop_back();
    }

    visited[x][y]=0;

}

vector<string> RIC(vector<vector<int>> maze,int size){
    vector<string> ans;
    string path;
    int x=0;
    int y=0;
    vector<vector<int>> visited(size, vector<int>(size,0));
    solve(maze,size,ans,path,x,y,visited);
    return ans;
}

int main(){
    vector<vector<int>> maze{
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };
    int size=4;
    vector<string> ans;
    ans=RIC(maze,size);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
   
}