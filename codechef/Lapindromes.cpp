#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,m,n;
        cin>>s;
        for(int i=0;i<s.length()/2;i++){
            m.push_back(s[i]);
            n.push_back(s[s.length()-i-1]);
        }
        sort(m.begin(),m.end());
        sort(n.begin(),n.end());
        if(m==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       
        
    }
     return 0;
}