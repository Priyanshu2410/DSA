#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n1,n2,n3,n=0;
	cin>>n1>>n2>>n3;
	int a[n1],b[n2],c[n3];
	map<int,int>mp;
	for(int i=0;i<n1;i++)
	{
	    cin>>a[i];
	    mp[a[i]]++;
	}
	
	for(int i=0;i<n2;i++)
	{
	    cin>>b[i];
	    mp[b[i]]++;
	}
	
	
	for(int i=0;i<n3;i++)
	{
	    cin>>c[i];
	    mp[c[i]]++;
	}
	for(auto it:mp)
	{
	    if(it.second>=2)
	    n++;
	}
	cout<<n<<endl;
	for(auto it:mp)
	{
	    if(it.second>=2)
	    cout<<it.first<<endl;
	}
	
	
	return 0;
}
