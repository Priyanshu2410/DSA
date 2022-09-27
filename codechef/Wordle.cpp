#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin>>t;
	while(t--){
	    string s,t,m;
	    cin>>s;
	    cin>>t;
	    int n = s.size();
	    for(int i=0;i<n;i++){
	        if(s[i]==t[i])
	        {
	            m += 'G';
	        }
	        
	        else
	        {
	            m += 'B';
	        }
	    }
	    cout<<m<<endl;
	}

	return 0;
}
