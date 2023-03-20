#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
      
	    if((y < x) && y != 0){
	        cout << "NO" << endl;
	    }
	    else if(y == x || y == 0){
	        cout << "YES" << endl;
	    }
	    else if(((n*x) >= y && (y % x) == 0)){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	    
    }
    return 0;
	    


    
    
}
