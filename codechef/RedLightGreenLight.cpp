#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n, m;
	    cin>>n>>m;
	    int arr[n];
	    int ans = 0;
	    for (int i = 0; i < n ; i++) {
	        cin>>arr[i];
	        if(m < arr[i])
	        {
	            ans++;
	        }
	    }
	    cout<<ans<<"\n";
	    
	}
	return 0;
}
