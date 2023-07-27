#include<bits/stdc++.h>

using namespace std;

vector<int> nextGreaterElement(vector<int>& arr, int n)
{

    vector<int>res(n,-1);
    stack<int>st;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty())
        {
             if(st.top()>arr[i]){
                 res[i]=st.top();
                 break;
             }
             st.pop();
        }
        st.push(arr[i]);
    }
    return res;
}