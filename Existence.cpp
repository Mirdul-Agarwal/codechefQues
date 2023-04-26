#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long  x,y;
	    cin>>x>>y;
	    long long left=(x*x*x*x)+4*(y*y);
	    long long right=4*(x*x)*y;
	    if(left==right){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	 
	    
	}
	return 0;
}
