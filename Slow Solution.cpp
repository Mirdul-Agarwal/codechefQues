#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    int ans=0;
	    while(x!=0)
	    {
	        if(z-y>=0)
	        {
	            if(z>=y)
	            {
	                ans+=(y*y);
	            }
	            z-=y;
	            x--;
	        }
	        else
	            break;
	        
	    }
	    if( x!=0 )
	    {
	        ans+=(z*z);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
