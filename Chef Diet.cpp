#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        int ex = 0,el = 0;
        for(int i = 0; i < n; i++){
            el += arr[i];
            if(k>el){
                ex = i+1;
                break;
            }
            el -= k;
        }
        if(ex==0){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO "<<ex<<endl;
        }
    }
	return 0;
}
