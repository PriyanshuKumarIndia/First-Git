#include <iostream>
using namespace std;

int main() {
	// your code goes here
	float t,a,b,c,d;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
	    if((a/c)>(b/d)) cout<<"Chefina"<<endl;
	    else if((a/c)==(b/d)) cout<<"Both"<<endl;
	    else cout<<"Chef"<<endl;
	}
	return 0;
}
