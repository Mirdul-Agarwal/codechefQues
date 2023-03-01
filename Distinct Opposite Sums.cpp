#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=1;i<=n/2;i++){
	       cout<<i<<" ";
	       
	    }
        for (int j = n; j>n/2; j--){
	       cout<<j<<" ";
	            
	    }
	    cout<<endl;
	}
	return 0;
}
