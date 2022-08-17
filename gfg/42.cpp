//String Reversal

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends


string reverseString(string s)
{
   string ans="";
   map<char,int>m;
   int flag=0;
   for(int i=s.length()-1;i>=0;i--){
       m[s[i]]++;
       if(m[s[i]]==1 && s[i]!=' '){
           ans+=s[i];
       }
   }
   return ans;
}