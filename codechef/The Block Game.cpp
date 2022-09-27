#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t; cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int sum=0;
	   for(int i=n;i>0;i=i/10) 
	   {
	       int d=i%10;
	       sum=(sum*10)+d;
	   }
	   if(sum==n)
	   {
	         cout<<"wins";
	   }
	   else 
	   {
	      cout<<"loses";
	   }
	         cout<<endl;
	}
	
	return 0;
}
