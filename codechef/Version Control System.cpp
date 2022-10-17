#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, m, k;
	cin>>t;
	while(t--) {
	    cin>>n>>m>>k;
	    int a[m],b[k],count=0;
	    for(int i=0;i<m;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<k;i++){
	        cin>>b[i];
	    }
	    for(int i=0;i<m;i++){
	        for(int j=0;j<k;j++){
	            if(a[i]==b[j]){
	                count++;
	                break;
	            }
	        }
	    }
	    if(m>k){
	        int te=m;
	        m=k;
	        k=te;
	    }
	    cout<<count<<" "<<n-k-(m-count)<<endl;
	    
	}
	return 0;
}
