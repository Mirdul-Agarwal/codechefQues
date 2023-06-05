#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    string r = string(s.rbegin(), s.rend());
	    if(s == r)
	    {
	        cout << "wins" << endl;
	    }
	    else
	    {
	        cout << "loses" << endl;
	    }
	}
	return 0;
}
