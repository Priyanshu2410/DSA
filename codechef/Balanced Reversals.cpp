#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0'){
	            cout<<"0";
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            cout<<"1";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
