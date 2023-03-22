#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long a, b;
	    cin>>a>>b;
	    int count=0;
	    while(a){
	        a=floor(a/b);
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
