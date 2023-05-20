#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--)
	{
	    int x,y;
	    std::cin >> x>>y;
	    std::cout << (15*x>=2*y ?"YES":"NO") << std::endl;
	}
	return 0;
}
