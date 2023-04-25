#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    int playlist[n];
	    for(int i=0;i<n;i++){
	        cin>>playlist[i];
	    }
	    cin>>k;
	     int duration = playlist[k-1];
        sort(playlist, playlist+n);
        for (int i = 0; i < n; i++) {
            if (playlist[i] == duration) {
                cout << i+1 << endl;
                break;
            }
        }
	    
	}
	return 0;
}
