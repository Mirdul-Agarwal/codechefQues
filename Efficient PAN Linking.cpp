#include<iostream>
using namespace std;
int main(){
 

 int t;
 cin>>t;
 while (t--)
 {
   string s;
   cin>>s;
   int x = s.size();

   int ans =0;
   for (int i = 0; i <x; i++)
   {
      ans = (ans*10 + (s[i]-'0'))%20;
   }
   cout<<ans<<endl;
 }
 

}
