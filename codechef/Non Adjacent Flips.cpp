#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    bool flag=true;
	    string s;
	    cin>>s;
	    int count=0;
	    for(int i=0;i<s.size()-1;i++){
	      if(s[i]=='0')
	      count++;
	      if(s[i]=='1' && s[i+1]=='1'){
	          flag=false;
	          break;
	      }
	    }
	    if(s[n-1]=='0')
	    count++;
	    if(count==s.size())
	    cout<<0<<endl;
	    else if(flag)
	    cout<<1<<endl;
	    else
	    cout<<2<<endl;
	}
	return 0;
}
