#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    float a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if(a/x==b/y)
	    cout<<"EQUAL"<<endl;
	    else if(a/x>b/y)
	    cout<<"ALICE"<<endl;
	    else
	    cout<<"BOB"<<endl;
	}
	return 0;
}
