// Front-Back Transformation - copy



//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string convert(string a);
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            string s;
            cin>>s;
            string ans=convert(s);
            cout<<ans<<endl;
            
        }
}

// } Driver Code Ends


string convert(string s)
{
    // code here.
    for(int i=0; i<s.size(); i++) {
        if(s[i]<=91) s[i] = 155-s[i];
        else s[i] = 219-s[i];
    }
    return s;
}
