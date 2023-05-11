#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,count=0;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        
	        if((a[i]+k)%7==0)
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
