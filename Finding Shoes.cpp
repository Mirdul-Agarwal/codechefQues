#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if(n>m)
	    cout<<(n-m)+n<<endl;
	    else
	    cout<<n<<endl;
	}
	return 0;
}
