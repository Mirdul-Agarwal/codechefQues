#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int T;
	cin>>T;
	while(T--)
	{
	    int R1,R2,R3;
	    cin>>R1>>R2>>R3;
	    if((R1>(R2+R3)) || (R2>(R1+R3)) || (R3>(R1+R2)))
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	    
	}
	return 0;
}
