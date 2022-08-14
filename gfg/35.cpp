// Split Strings

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    vector<string> splitString(string S) 
    { 
        vector<string>ans;
        string str1="",str2="",str3="";
       
       for(int i=0;i<S.size();i++){
           if((S[i]>='a' && S[i]<='z') || (S[i]>='A'&& S[i]<='Z'))
           {
               str1.push_back(S[i]);
           }
           else if(S[i]>='0' && S[i]<='9'){
               str2.push_back(S[i]);
           }
           else{
               str3.push_back(S[i]);
           }
       }
       ans.push_back(str1);
       ans.push_back(str2);
       ans.push_back(str3);
       
       return ans;
    } 
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        vector<string> result = ob.splitString(S);
        for (int i = 0; i < result.size(); ++i)
        {
            if(result[i] == "")
                cout<<-1<<"\n";
            else
                cout<<result[i]<<"\n";
        }
    }
    return 0; 
} 


// } Driver Code Ends