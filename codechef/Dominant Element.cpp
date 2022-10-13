#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];}
        int max=0,count=0;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    c++;
                }
            }
             if(max<c){
                    max=c;
                    count=1;
                }
                else if(c==max){
                    count=0;

                }
        }
        if(count==1)
            cout<<"YES"<<endl;

    else
    cout<<"NO"<<endl;
}
return 0;
}