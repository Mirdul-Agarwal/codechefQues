#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int m, x, y, z;
	    cin>>m>>x>>y>>z;
	    
	    if (x==m || y==m || z==m || x+y==m || y+z==m || z+x==m || x+y+z==m) {
	        cout<<"YES"<<endl;
	    }
	    else cout<<"NO"<<endl;
	}
	return 0;
}
