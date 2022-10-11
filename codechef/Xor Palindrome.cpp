#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int start=0,end=n-1;
        int count=0;
        while(start<=end){
            if(s[start]!=s[end]){
                count++;
            }
            start++;
            end--;
        }
        cout<<(count+1)/2<<endl;
        
     }
         
	return 0;
}