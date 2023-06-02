#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int b1,b2,b3;
	    cin>>b1>>b2>>b3;
	    if(b1+b2+b3==0 or b1+b2+b3==1)
	    {
	        cout<<"water filling time\n";
	    }
	    else
	    {
	        cout<<"not now\n";
	    }
	}
	return 0;
}
