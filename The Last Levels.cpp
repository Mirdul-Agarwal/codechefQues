#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int x,y,z;
        cin>>x>>y>>z;
        
        
        if (x>3&& x%3==0)
        cout<< x*y + (x/3-1)*z<<endl;
        else if (x>3 && x%3!=0)
        cout<<x*y + (x/3)*z<<endl;
        else
        cout<<x*y<<endl;
        
    }
	// your code goes here
	return 0;
}
