#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin>>t;
	while(t--){
	    int x;
	    
	    cin>>x;
	    int a[x];
	    int count=0;
	    
	    
	    for(int i=0;i<x;i++){
	        cin>>a[i];
	        if(a[i]>=1000){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
