#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int x,y;
	    cin>>x>>y;
	    if(5*x >= y) {
	        cout<<"YES"<<"\n";
	    } else {
	        cout<<"NO"<<"\n";
	    }
	}
	return 0;
}
