#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>x>>y;
	    // cin>>y;
	    if((x+y)<=6){
	        cout<<"NO"<<endl;
	    }
	    else cout<<"YES"<<endl;
	}
	return 0;
}
