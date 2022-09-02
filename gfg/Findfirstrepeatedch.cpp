//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    int count[256]={0};
   string pri="";
   for(int i=0;i<s.size();i++){
       if(count[s[i]]==1){
           pri=s[i];
           return pri;
       }
       else
           count[s[i]]++;
   }
   return "-1";
}