#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n<3){
	        cout<<"LIGHT"<<endl;
	    }
	    else if(n>=3 &&n<7)
	    cout<<"MODERATE"<<endl;
	    else
	    cout<<"HEAVY"<<endl;
	}
	return 0;
}
