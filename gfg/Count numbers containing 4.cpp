//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Digit4(int n)
    {
        int num = 0;
        while(n != 0)
        {
            num = n % 10;
            if(num == 4)
            {
                return true;
            }
            n = n /10;
        }
        return false;
    }
    int countNumberswith4(int N) 
    {
        int count = 0;
        for(int i = 0; i <= N; i++)
        {
            if(Digit4(i) == true)
            {
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countNumberswith4(N) << endl;
    }
    return 0;
}
// } Driver Code Ends