#include <iostream>
using namespace std;

int main() {
	int n;
	std::cin >> n;
	
	while (n > 0) {
	    int a, b, c;
	    std::cin >> a >> b >> c;
	    std::cout << (a + b + c == 180 ? "YES" : "NO") << '\n';
	    n--;
	}
	return 0;
}
