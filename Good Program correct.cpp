#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(n%4==0){
	        cout<<"good\n";
	    }else{
	        cout<<"not good\n";
	    }
	}
	return 0;
}
