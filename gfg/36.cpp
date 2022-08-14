// Extract the integers


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<string> extractIntegerWords(string s);

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        vector<string> ans = extractIntegerWords(str);
        if(ans.size() == 0)
            cout<<"No Integers";
        else
            for(auto i: ans) cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


vector<string> extractIntegerWords(string s)
{
    // code here
    vector<string> v;
    int i=0;
    int n=s.size();
    while(i<n)
    {
        string str; 
        while(s[i]>='0' && s[i]<='9')
        {
            str=str+s[i];
            i++;
        }
        int m=str.size();
        if(m>0)
        {
            v.push_back(str);
        }
        i++;
    }
    return v;
}