#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int x, y, s;
	    cin>>x>>y;
	    string k = "Alice";
	    s = x+y;
	    
	    for (int i=2; i<s; i++) {
	        if (s%i == 0) {
	            k = "Bob";
	            break;
	        }
	    }
	    cout<<k<<endl;
	}
	return 0;
}
