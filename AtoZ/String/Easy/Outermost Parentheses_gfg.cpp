//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
        string removeOuter(string& s) {
        int n=s.length();
        string res="";
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(count)
                res+=s[i];
                count++;
            }else if(s[i]==')' && count==1){
                count--;
                continue;
            }else{
                count--;
                res+=s[i];
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends