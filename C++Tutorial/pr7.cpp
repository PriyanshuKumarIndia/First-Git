#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,temp;
	string arr;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x%2==0){
	        for(int i=0;i<x;i++){
	            if(i==0||i==(x-1)){
	                arr[i]='1';
	            }
	            else arr[i]='0';
	        }
	    }
	    else{
	        for(int i=0;i<x;i++){
	        if(i%2==0){
	            arr[i]='0';
	        }
	        else arr[i]='1';
	    }
	    }
	    for(int i=0;i<x;i++){
            cout<<arr[i];
        }
        cout<<endl;
	}
	return 0;
}
