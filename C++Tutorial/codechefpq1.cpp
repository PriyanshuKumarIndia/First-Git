#include<iostream>
using namespace std;

int completeRows(int n) {
        // code here
        int i=1,count=0;
        while(n>0){
           n-=i;
           i++;
           count++;
		   if(n<i) break;
        }
        return count;
    }

int main(){
	int n;
    cin>>n;
	cout<<completeRows(n)<<" possible complete rows"<<endl;
}