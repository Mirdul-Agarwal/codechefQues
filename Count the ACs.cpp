#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int p, a;
	    cin>>p;
	    a = p/100 + p%100;
	   
	    cout<<(a > 10 ? -1 : a)<<endl;
	}
	return 0;
}
