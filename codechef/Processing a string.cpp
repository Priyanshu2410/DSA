#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    int x=0;
	    cin>>s;
	    for(int i=0;i<s.length();i++){
	        if(s[i]>='0'&&s[i]<='9'){
	            x+=(s[i]-'0');
	        }
	    }
	    cout<<x<<endl;
	}
	return 0;
}
