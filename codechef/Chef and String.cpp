#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    bool val = true;
	    int n = str.size(),i;
	    for(i=0;i<n;i++)
	    {
	        if(str[i] != str[(i+2)%n])
	        {
	            val = false;
	            break;
	        }
	    }
	    if(val)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
