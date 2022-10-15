#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int count=0;
	    int arr[n];
	    for(int i=0; i<n; i++) cin>>arr[i];
	    if(n==7) {
	        cout<<"7\n";
	        continue;
	    }
	    for(int i=0; i<n; i++) {
	        if(arr[i]>=1 && arr[i]<=7) {
	                count++;
	        }
	        
	        if(count == 7) {
	            cout<<i+1<<'\n';
	            break;
	        }
	        
	    }
	}
	return 0;
}