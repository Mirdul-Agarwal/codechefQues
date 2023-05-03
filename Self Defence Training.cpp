#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int n, a, c=0;
	    cin>>n;
	    
	    for (int i=0; i<n; i++) {
	        cin>>a;
	        if (a>=10 && a<=60) c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
