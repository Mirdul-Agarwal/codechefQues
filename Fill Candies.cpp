#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,m,temp;
	    cin>>n>>k>>m;
	    temp=k*m;
	    if(n%temp==0){
	        cout<<n/temp<<endl;
	    }
	    else{
	        cout<<(n/temp)+1<<endl;
	    }
	}
	return 0;
}
