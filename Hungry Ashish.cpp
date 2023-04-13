#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,v,c;
	    
	    cin>>x>>v>>c;
	    
	    if(x>=v)
	    cout<<"PIZZA"<<endl;
	    
	    else if(x<v && x<c)
	    cout<<"NOTHING"<<endl;
	    
	    else
	    cout<<"BURGER"<<endl;
	}
	return 0;
}
