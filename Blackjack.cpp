#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    if(a+b>10){
	        cout<<21-(a+b)<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	  
	}
	return 0;
}
