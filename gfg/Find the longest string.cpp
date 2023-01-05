//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string longestString(vector<string> &words)
    {
        map<string,int> m;
        for(auto i:words)
        {
            m[i]++;
        }
        int n=words.size();
        // vector<string> v;
        string ans="";
        for(int i=0;i<n;i++)
        {
            string temp="";
            for(int j=0;j<words[i].size();j++)
            {
                temp.push_back(words[i][j]);
                if(m[temp]==0)
                {
                    break;
                }
                else
                {
                    if(temp.size()==ans.size())
                    {
                        if(ans>temp)
                        {
                            ans=temp;
                        }
                    }
                    else if(temp.size()>ans.size())
                    {
                        ans=temp;
                    }
                }
            }
        }return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends