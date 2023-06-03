#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p1,p2,q1,q2;
	    cin>>p1>>p2>>q1>>q2;
	    if(max(p1,p2)>max(q1,q2))
	    cout<<"Q"<<endl;
	    else if(max(p1,p2)<max(q1,q2))
	    cout<<"P"<<endl;
	    else
	    cout<<"TIE"<<endl;
	}
	return 0;
}
