//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Queue {
    stack<int> input, output;
public:

    void enqueue(int x)
    {
         input.push(x);
    }

    int dequeue() {
         if(input.empty())
        {
            return -1;
        }
        
        while(input.size() > 1)
        {
            int t = input.top();
            output.push(t);
            input.pop();
            
        }
        
        int x = input.top();
        input.pop();
        while(!output.empty())
        {
            int t = output.top();
            input.push(t);
            output.pop();
        }
        
        return x;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Queue ob;

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            ob.enqueue(a);
        }
        else if(QueryType==2)
        {
            cout<<ob.dequeue()<<" ";

        }
        }
    cout<<endl;
    }
}

// } Driver Code Ends