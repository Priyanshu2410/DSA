#include <iostream>
#include<string>
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
	    int count=0;
	    for (int i=0;i<n;i++){
	        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
	            count=0;
	        }
	        else {
	            count++;
	        }
	        if(count>3){
	            cout<<"no\n";
	            break;
	        }
	    }
	    if(count<=3) {
	        cout<<"yes\n";
	    }
	}
	return 0;
}