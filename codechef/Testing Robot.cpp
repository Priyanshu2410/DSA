#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    string s;
	    cin>>s;
	    set<int> ss;
	    ss.insert(x);
	    for(int i=0;i<n;i++)
	    {
	        if(s[i] == 'R')
	        {
	            x+=1;
	            ss.insert(x);
	        }
	        else if(s[i]=='L')
	        {
	            x-=1;
	            ss.insert(x);
	        }
	    }
	    
	    cout<<ss.size()<<endl;
	}
	return 0;
}
