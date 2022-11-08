//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
         stack<char> check;
        int size = x.length();
        for(int i = 0 ; i < size ; i++)
        {
            if(x[i] == '(' || x[i] == '{' || x[i] == '[')
            {
               check.push(x[i]);
            }
            else
            {
                if(x[i] == ')')
                {
                    if(check.empty() || check.top() != '(')
                    {
                        return 0;
                    }
                }
               else if(x[i] == '}')
                {
                    if(check.empty() ||check.top() != '{')
                    {
                        return 0;
                    }
                }
              else  if(x[i] == ']')
                {
                    if(check.empty() ||check.top() != '[')
                    {
                        return 0;
                    }
                }
                check.pop();
            }
        }
        if(!check.empty())
        {
            return 0;
        }
        return 1;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends