// Remove character

//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string removeChars(string s1, string s2) {
        string ans;
      for(int i=0;  i<s1.size();i++)
      {
          if(s2.find(s1[i])==string ::npos) ans+=s1[i];
      }
     return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}

// } Driver Code Ends