#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c=0,d=0;
	    int count=1;
	    cin>>a>>b;
	    while((c<=a) || d<=b){
	        c=c+count;
	        if(c>a){
	            cout<<"Bob"<<endl;
	            break;
	        }
	        count++;
	        d=d+count;
	        if(d>b){
	            cout<<"Limak"<<endl;
	            break;
	            
	        }
	        count++;
	    }
	   
	    
	}
	return 0;
}
