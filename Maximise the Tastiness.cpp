#include <iostream>
using namespace std;

int main() {
	int T,A,B,C,D,P,Q;
	cin>>T;
	while(T--){
        cin>>A>>B>>C>>D;
	    
	    if(A>B){P=A;}
	    else{P=B;}
	    
	    if(C>D){Q=C;}
	    else{Q=D;}
	    
	    cout<<P+Q<<endl;
	}
	return 0;
}
