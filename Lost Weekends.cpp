#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int p;
	    int arr[5];
	    for(int i=0; i<5; i++){
	        cin>>arr[i];
	    }
	    cin>>p;
	    int sum = 0;
	    for(int i=0; i<5; i++){
	        sum += arr[i]*p;
	    }
	    if(sum <= (5*24)){
	        cout<<"No"<<endl;
	    }
	    else cout<<"Yes"<<endl;
	}
	return 0;
}
