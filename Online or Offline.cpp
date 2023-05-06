#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while (t--)
    {
        float m,n,p;
        cin>>n>>m;
        p=0.9*n;
        if (p>m)
        cout<<"DINING"<<endl;
        else if(p<m)
        cout<<"ONLINE"<<endl;
        else
        cout<<"EITHER"<<endl;
        
    }
	return 0;
}
