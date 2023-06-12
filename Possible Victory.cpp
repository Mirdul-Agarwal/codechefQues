#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	int score=(20-b)*36;
	int res=c+score;
	(res>a)?cout<<"yes":cout<<"no";
	cout<<endl;
	return 0;
}
