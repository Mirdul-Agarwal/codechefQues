#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a,c;
	    cin>>n>>a;
	    c=n-a;
	    if(c<=a)
	    {
	        cout<<c<<endl;
	    }
	    else{
	        cout<<a<<endl;
	    }
	}
	return 0;
}
