#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    //first step 
	    
	    for(int i=0;i < n -1;i+=2)
	    {
	        char tmp;
	        tmp = s[i];
	        s[i] = s[i + 1];
	        s[i + 1] = tmp;
	        
	    }
	    
	    //second step 
	    
	    for(int i=0;i<n;i++)
	    {
	        s[i] = s[i] + 2 * (108 - s[i]) + 3;
	    }
	    
	    cout<<s<<endl;
	    
	    // h(104) = h(104) + (108 - 104);
	    // h = l;
	}
	return 0;
}
