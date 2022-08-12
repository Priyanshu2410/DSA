// Reversing the vowels


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        string modify (string s)
        {
           vector<int> vrr;
            for (int i=0; i<s.length(); i++){
            	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    vrr.push_back(i);
                }
            }
            int n = vrr.size();
            int j=n-1;
            for(int i(0); i<n/2; i++){
                char temp = s[vrr[i]];
                s[vrr[i]] = s[vrr[j]];
                s[vrr[j]] = temp;
                j--;
              }
             return s;
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
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends