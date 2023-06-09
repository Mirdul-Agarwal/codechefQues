#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T ;
	while(T){
	    int n,x,valid, count = 0 ;
	    cin >> n >> x;
	    valid = n*x;
	    while(valid){
	        valid = valid/10;
	        count++;
	    }
	    if(count == 5)
	    std::cout << "yes" << std::endl;
	    else
	    std::cout << "no" << std::endl;
	    T--;
	    
	}
	return 0;
}
