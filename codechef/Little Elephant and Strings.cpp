#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        int count;
        string s;
        cin>>s;
        int x=s.length();
        if(x>=47) cout<<"Good"<<endl;
        else{
            for(int i=0;i<n;i++)
            {
                count=0;
                int r=s.find(arr[i]);
                if(r!=-1)
                {cout<<"Good"<<endl;
                   count++;
                    break;
                }
                
            }
            if(count==0) cout<<"Bad"<<endl;
        }
    } 
    
    
}