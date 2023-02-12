#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int w1,w2,x1,x2,m,temp,s,b;
        cin>>w1>>w2>>x1>>x2>>m;
        temp=w2-w1;
        if(temp<=x2*m && temp>=x1*m){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
	return 0;
}
