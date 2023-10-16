#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float a,b;
	    int c;
	    cin>>a;
	    cin>>b;
	    cin>>c;
	    cout<<c;
	    if(c=='+') cout<<a+b;
	    else if(c=='-') cout<<a-b;
	    else if(c=='*') cout<<a*b;
	    else if(c=='/') cout<<a/b;
	}
	return 0;
}
