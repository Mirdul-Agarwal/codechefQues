#include <iostream>
using namespace std;

int main() {
	int t,n,m;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    if(n<=m*6*6)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
