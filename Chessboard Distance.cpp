#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int x1,x2,y1,y2;
	    cin >> x1 >> x2 >> y1 >> y2;
	    int one = abs(x1-y1);
	    int second = abs(x2-y2);
	    
	    int chessDistance = max( one,second );
	    cout << chessDistance << endl;
	    
	}
	return 0;
}
