#include <bits/stdc++.h>
using namespace std;

void display(string ans[]){
    for(int i=0;i<3;i++){
        for(int j=0;j<ans[i].length();j++){
            cout<<ans[i][j]<<" ";
        }
    }
}

int main(){
    string str="Sky is blue ";
    string ans[5];
    int tr=0,j=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            int temp=i-1,k=0;
            for(int l=tr;l<=temp;l++,k++){
                ans[j][k]=str[l];
            }
            j++;tr=i+1;
        }
    }
        display(ans);
}