#include <iostream>
using namespace std;

int main() {
	int p,q,r,s,count=0;
	cin>>p>>q>>r>>s;
	 if(p>=10 ){
	    count++;
	}
     if(q>=10){
	    count++;
	}
	 if(r>=10){
	    count++;
	}
	 if(s>=10){
	    count++;
	}
	cout<<count<<endl;
	return 0;
}
