#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<"1";
	    for(int i=1;i<n-1;i++)
	    {
	        cout<<"0";
	    }
	    cout<<"1";
	    cout<<endl;
	}
	return 0;
}
