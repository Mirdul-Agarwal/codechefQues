#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((a>b and a<c) or (a<b and a>c))
	    {
	    cout<<a<<endl;
     	}
     	else if((b>a and b<c)or (b<a and b>c))
     	{
     	    cout<<b<<endl;
     	}
     	else{
     	    cout<<c<<endl;
     	}
	}
	
	return 0;
}
