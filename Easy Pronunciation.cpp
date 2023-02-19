#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    string s;
	    cin >> n;
	    cin >> s;
	    int Max = 0, count = 0;
	    for(int i=0; i<n; i++)
	    {
	        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
	        {
	            Max = max(Max, count);
	            count = 0;
	        }
	        else
	            count++;
	    }
	    Max = max(Max, count);
	    if(Max >= 4)
	        cout <<  "NO\n";
	    else
	        cout << "YES\n";
	}
	return 0;
}
