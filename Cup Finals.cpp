#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z,d;
	    cin>>x>>y>>d;
	    z=abs(x-y);
	    if(z<=d)
	    cout << "YES" << endl;
	    else
	    cout << "NO" << endl;
	}
	return 0;
}
