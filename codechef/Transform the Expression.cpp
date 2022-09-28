#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t; 
	while(t--)
	{
	    string str;
	    cin>>str;
	    stack<char> s;
	    for(auto x:str)
	    {
	        if(x=='(')continue;
	        else if(x==')'){
	            cout<<s.top();
	            s.pop();
	        }
	        else if(x>='a' and x<='z')
	        {
	            cout<<x;
	        }
	        else{
	            s.push(x);
	        }
	    }
	    cout<<endl;
	    
	}
	return 0;
}