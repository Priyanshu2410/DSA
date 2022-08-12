//Count type of Characters

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
             vector<int> v;
            //code here.
            int n=s.length();
            int l=0,u=0,num=0,sp=0;
            
            for(int i = 0; i<n; i++){
                int c = s[i];
                
                if(c>=97 && c<=122)
                    l++;
                
                else if(c>=65 && c<=90)
                    u++;
                
                else if(c>=48 && c<=57)
                    num++;
                else
                    sp++;
            }
            
            v.push_back(u);
            v.push_back(l);
            v.push_back(num);
            v.push_back(sp);
            return v;
            
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends