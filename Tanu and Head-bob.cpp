#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s;
	    cin>>n;
	    cin>>s;
	    int a,b,c;
	    a=count(s.begin(),s.end(),'I');
	    b=count(s.begin(),s.end(),'Y');
	    c=count(s.begin(),s.end(),'N');
	    if(a>=1){
	        cout<<"INDIAN"<<endl;
	    }
	    else if(b>0){
	        cout<<"NOT INDIAN"<<endl;
	        
	    }
	    else{
	        cout<<"NOT SURE"<<endl;
	    }


	    
	    
	}
	return 0;
}
