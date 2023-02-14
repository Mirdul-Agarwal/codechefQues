#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n],ev=0,od=0;
	for (int i = 0; i < n; i++) {
	    cin>>arr[i];
	    if(arr[i]%2==0){
	        ev++;
	    }
	    else{
	        od++;
	    }
	}

	    if(ev>od){
	        cout<<"READY FOR BATTLE"<<endl;
	    }
	    else{
	        cout<<"NOT READY"<<endl;
	    }
	
	return 0;
}
