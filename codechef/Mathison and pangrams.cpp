#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    int p[26], sum=0;
	    for(int i=0; i<26; i++){
	        cin>>p[i];
	    }
	    cin>>s;
	    
	    int q[26]={0};
	    
	    for(int i=0; i<s.size(); i++){
	        q[s[i]-'a']=1;
	}
	
	for(int i=0; i<26; i++){
	    if(q[i]==0){
	        sum+=p[i];
	    }
	}
	cout<<sum<<endl;
 }
	
	return 0;
}
