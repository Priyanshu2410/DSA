#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        cin>>A[i];
        sort(A,A+n);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(A[i]!=A[i+1] && A[i]!=0)
            {
                count++;
            }
        }
        cout<<count<<endl;
        
    }
	return 0;
}