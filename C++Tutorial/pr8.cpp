#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int size,th=0,tt=0;
	    cin>>size;
	    string str;
	    cin>>str;
	    for(int i=0;i<size;i++){
            if(str[i]=='.'){
                continue;
            }
	        if(str[i]=='H'){
                if(tt!=0|| th==1){
                    cout<<"Invalid1"<<endl;
                    break;
                }
	            th=1;
                tt=1;
                continue;
	        }
	        if(str[i]=='T'){
	            if(th==1){
	                tt=0;
                    th=0;
	            }
	            else{
                    tt=1;
	                cout<<"Invalid"<<endl;
	                break;
	            }
	        }
	    }
	    if(th==0 && tt==0){
	        cout<<"Valid"<<endl;
	    }
        else if(th==1) cout<<"Invalid3"<<endl;
	}
	return 0;
}
