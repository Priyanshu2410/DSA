// longest substring containing '1'

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxlength(string s);
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
cout<<maxlength(s)<<endl;
}
return 0;
}

// } Driver Code Ends


int maxlength( string s)
{
         int maxi = 0, count = 0, n = s.length();
       for(int i = 0; i < n; i++)
       {
          if(s[i] == '1')
          {
              count ++;
              maxi = max(count,maxi);
          }
          else count = 0;
      }
      return maxi;
}